/*************************************************
                                                
  CS155 - Computer Science 1                    
  Spring Semester, 2017                         
  Project #6 - March Madness               
  User inputs selections and recieves a file with 
  selections and summary     
  				                                              
  Programmer: Adam Risher                       
  Date: Tuesday March 21th, 2017                        
                                                
*************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//Prototypes of functions
char displayMenu();
void recordEvent(ofstream &output, string event);
void calcPercent(int made, int attempted, double &percent);
void generateSummary(ofstream &output, int ftMade,int ftAttempted,int twoMade,int twoAttempted,int threeMade,int threeAttempted);
//End of prototypes

int main(){
	//Variable Decleration
	int ftMade = 0, ftAttempted = 0, twoMade = 0, twoAttempted = 0, threeMade = 0, threeAttempted = 0;
	char choice = ' ';
	ofstream output;
	
	//Create file, error if it can't be created
	output.open("RisherAdam_MM.txt");
	if(!output){
		cout << "File could not be created" << endl;
		exit(1);
	}
	//Main loop, ends when choice is 'Q'
	do{
		choice = displayMenu(); //Call displayMenu Function and get the char returned/
		choice = toupper(choice); // makes selection upcase for use in switch statement
		
		//Switch cases call the record event function and increment the related variable
		switch(choice){
			case 'F': recordEvent(output, "Free throw Made");
					  ftMade++;
					  ftAttempted++;
					  break;
			case 'X': recordEvent(output, "Free throw Missed");
					  ftAttempted++;
					  break;
			case 'G': recordEvent(output, "Two Point Field Goal Made");
					  twoMade++;
					  twoAttempted++;
					  break;
			case 'Y': recordEvent(output, "Two Point Field Goal Missed");
					  twoAttempted++;
					  break;
			case 'T': recordEvent(output,"Three Pointer Made");
					  threeMade++;
				      threeAttempted++;		  		  		  
					  break;
			case 'Z': recordEvent(output,"Three Pointer Missed");
					  threeAttempted++;
					  break;
			case 'Q': recordEvent(output, "Game Over \n");
					  break;		  
			default: 
				cout << "That was not a valid option please re-enter your selection" << endl;
				break;		  
		}
	}while(choice != 'Q');
	//end main loop
	
	//call generateSummary, This creates the table that displays final statistics 
	generateSummary(output, ftMade, ftAttempted, twoMade, twoAttempted, threeMade, threeAttempted);	
	output.close(); //Close the output
    return 0;
}


/***************************************************** 
   Name: displayMenu
   Purpose: To display the selection menu of options
   Incoming: none
   Outgoing: the choice made
   Return: a single char
*****************************************************/
char displayMenu(){
	char choice = ' ';
	cout << "Enter one of the Following Options" << endl;
	cout << "F - Freethrow Made" << endl
		 << "X - Freethrow Missed" << endl
		 << "G - Two Point Field Goal Made" << endl
		 << "Y - Two Point Field Goal Missed" << endl
		 << "T - Three Pointer Made" << endl
		 << "Z - Three Pointer Missed" << endl
		 << "Q - Game Over" << endl
		 << "What is your selection: ";
	cin >> choice;
	cout << endl;
	return choice;
}

/***************************************************** 
   Name: recordEvent
   Purpose: to put the event selected into the document
   Incoming: output, string
   Outgoing: none
   Return: none
*****************************************************/
void recordEvent(ofstream &output, string event){
	output << event << endl;
}

/***************************************************** 
   Name: calcPercent
   Purpose: calclates the percentage of throws made, if none were attempted sets to 0
   Incoming: made, attempted, &percent
   Outgoing: none 
   Return: none
*****************************************************/
void calcPercent(int made, int attempted, double &percent){
	if (attempted == 0)
		percent = 0;
	else	
		percent = ((double)made/attempted)*100;
}

/***************************************************** 
   Name: generateSummary
   Purpose: writes freethrows attempted, made and percentage; 
   			two pointers attempted, made and percentage;
			three pointers attempted, made and perccentage 
			and the total points scored to the document 
   Incoming: ftMade, twoMade, threeMade, ftAttempted, 
   			 twoAttempted, threeAttempted, and output
   Outgoing: none
   Return: none
*****************************************************/
void generateSummary(ofstream &output, int ftMade,int ftAttempted,int twoMade,int twoAttempted,int threeMade,int threeAttempted){
	double ftPercent = 0, twoPercent = 0, threePercent = 0;
	int totalPoints = ftMade + (twoMade * 2) + (threeMade * 3);	//calculates total points
	calcPercent(ftMade, ftAttempted, ftPercent);
	calcPercent(twoMade, twoAttempted, twoPercent);
	calcPercent(threeMade, threeAttempted, threePercent);
	
	output <<"Shot" << setw(20) << "Makes" << setw(10) << "Attempts" << setw(10) << "%Made" << endl
		   <<"Free Throws" <<setw(12) << ftMade << setw(10) << ftAttempted << setw(11) << setprecision(1) << fixed << ftPercent << "%" << endl 
		   <<"Two Pointers" <<setw(11) << twoMade << setw(10) << twoAttempted << setw(11) << setprecision(1) << fixed <<  twoPercent << "%" << endl
		   <<"Three Pointers" <<setw(9) << threeMade << setw(10) << threeAttempted << setw(11) << setprecision(1) << fixed <<  threePercent << "%" << endl
		   << endl
		   << "Total Points: " << setw(9) << totalPoints;
}
