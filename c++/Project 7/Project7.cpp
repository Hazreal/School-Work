/*************************************************
                                                
  CS155 - Computer Science 1                    
  Spring Semester, 2017                         
  Project #7 - Stuck in the Mud               
  A dice game where you roll to get the most points     
  				                                              
  Programmer: Adam Risher                       
  Date: Tuesday April 18th, 2017                        
                                                
*************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
//Don't change STUCK value!																
const int STUCK = -1, NUM_DICE = 5; 							//NUM_DICE can be changed but
																//high numbers will mess with formating
void initDice(int dice[]);										
void rollDice(int dice[], int& sum);
void displayDice(int dice[], int sum);
bool gameover(int dice[]);

int main(){
    int sum = 0, dice[NUM_DICE];
    bool done = false;
   	srand(time(NULL));											//set up psuedo-random number generator

	initDice(dice);												//set all indexes to 0;
    for(int dieNumber = 1; dieNumber<= NUM_DICE; dieNumber++)	//set column headers
        cout << "DIE#" << dieNumber  << " ";
        cout << setw(5) << "SUM" << endl;
    while(!done){												//main game loop
    	rollDice(dice, sum);									//roll dice -> show values -> check for gameover
    	displayDice(dice, sum);									
    	done = gameover(dice);
	}
	displayDice(dice, sum);
	
	cout << endl << "Your final score is: " << sum << endl;		//show final sum

	return 0;
}


/*********************************************************
   Name: displayDice
   Purpose: Display the values held within the dice array
   Incoming: dice[], sum
   Outgoing: list of rolled numbers and the sum
   Return: none
*********************************************************/
void displayDice(int dice[], int sum){
    for(int x = 0; x < NUM_DICE; x++){
    	if(x == 0)												//formatting for first column
    		if (dice[x] == STUCK)
    			cout << setw(0) << "STUCK";
    		else
    			cout << setw(3) << dice[x];
		else													//formatting for other dice columns
			if (dice[x] == STUCK)
				if(dice[x - 1] == STUCK)
					cout << setw(6) << "STUCK";
				else
					cout << setw(8) << "STUCK";
			else
				if(dice[x - 1] == STUCK)
					cout << setw(4) << dice[x];
				else
					cout << setw(6) << dice[x];
    }
		if(dice[NUM_DICE-1] == STUCK)							//formating for sum column based
			cout << setw(6) << sum << endl;						//on what came before it
		else
			cout << setw(8) << sum << endl;
}

/***************************************************** 
   Name: initDice
   Purpose: sets all indexs of dice array to 0
   Incoming: dice[]
   Outgoing: none
   Return: none
*****************************************************/
void initDice(int dice[]){
    for(int x = 0; x < NUM_DICE; x++)
        dice[x] = 0;
}

/***************************************************** 
   Name: rollDice
   Purpose: to set indexes of dice array to random numbers 
   			between 1 and 6
   Incoming: dice[], sum
   Outgoing: none
   Return: none
*****************************************************/
void rollDice(int dice[], int& sum){
    for(int x = 0; x < NUM_DICE; x++){
        if(dice[x] != STUCK){
            dice[x] = rand()%6+1;							//sets index to random number 1 to 6
            
        if(dice[x] != 2 && dice[x] != 5 && dice[x] != STUCK)
             sum += dice[x];								//adds values to sum if not 2,5 or equal to STUCK
        } 
    }
}

/***************************************************** 
   Name: gameover
   Purpose: to check and see if all dice are "Stuck"
   			and end the game if they are
   Incoming: dice[]
   Outgoing: none
   Return: done as true or false
*****************************************************/
bool gameover(int dice[]){
    bool done = false;
	int count = 0;
    for(int x = 0; x < NUM_DICE; x++)
        if(dice[x] == 2 || dice[x] == 5 || dice[x] == STUCK){	//sets dice to stuck if 2 or 5
            dice[x] = STUCK;									//and keeps track of count
            count++;											
        }
    if(count >= NUM_DICE)										//if count >= NUM_DICE game is done
        done = true;
	return done;             
}
