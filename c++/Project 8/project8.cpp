/*************************************************
                                                
  CS155 - Computer Science 1                    
  Spring Semester, 2017                         
  Project #8 - Another Dimension               
  Allow input of a menu as well as read and fill a
  2D array from a file.     
  				                                              
  Programmer: Adam Risher                       
  Date: Tuesday April 25th, 2017                        
                                                
*************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int ROWS = 10, COLS = 10;															//Maximum row and column size

void fillMatrix(int table[][COLS], int& row, int& col, bool& populated);				//function prototypes
void printMatrix(int table[][COLS], int row, int col);
int  getSum(int table[][COLS], int row, int col);
void getStats(int table[][COLS], int row, int col, double& average, int& min, int& max);
void printDiagonal(int table[][COLS], int row, int col);
int  menu(int choice);
int main(){
    
    int table[ROWS][COLS];
    int sum = 0, min = 0, max = 0, choice = -1, row = 0, col = 0;
    bool populated = false, done = true, choiceMade = true;
    double average =0;
    cout << "Suggest populating the matrix first (option 1)"<< endl;
    while(done){																		//main loop
    	if(choice != 0 && choice != 6 && choiceMade == true){							//display menu if choices are correct
    		choice = menu(choice);														//done so user never inputs choice twice in a row
    		choiceMade = false;
    	}
		switch(choice){																	//begin switch
	   		case 0: cout << "Thanks for using the program!" << endl;					//exit program
	   				done = false;
	 				break;
			case 1: fillMatrix(table, row, col, populated);								//fills array from file
					cout << "The matrix has been populated" << endl;
    				choiceMade = true;
					break;
	    	case 2: printMatrix(table, row, col);										//prints array
	    			cout << endl;
	    			choiceMade = true;
	   				break;
	    	case 3: sum = getSum(table, row, col);										//calculates sum and returns
	    			cout << "The sum of all fields in the matrix is: " << sum << endl;
	   				choiceMade = true;
					break;
	   		case 4: getStats(table, row, col, average, min, max);						//gets average, min and max
	    			if(populated)
	   					cout << "The average is: " << average << endl
	 						 << "The maximum is: " << max << endl
    					 	 << "The minimum is: " << min << endl;
	   				choiceMade = true;
					break;
    		case 5: printDiagonal(table, row, col);										//prints the numbers in a diagonal
    				choiceMade = true;													// if matrix is square
					break;
	    	case 6: choice = menu(-1);													//displays menu
	    			choiceMade = false;
					break;	
		}
		
	}
    return 0;
}

/*********************************************************
   Name: fillMatrix
   Purpose: fills array with information from file
   Incoming: table[][], row, col, populated
   Outgoing: table[][], row, col, populated
   Return: none
*********************************************************/
void fillMatrix(int table[][COLS], int& row, int& col, bool& populated){
    ifstream input ("p8in.txt");
    if (input.fail()){
        cout << "Couldn't open file!" << endl;
        exit(1);
    }
    input >> row >> col;
    for(int x = 0; x < row; x++){
        for(int y = 0; y<col; y++){
            input >> table[x][y];
        }
    }
    populated = true;
    input.close();
}

/*********************************************************
   Name: printMatrix
   Purpose: displays matrix in tabular format
   Incoming: table[][], row, col
   Outgoing: displays table to console
   Return: none
*********************************************************/
void printMatrix(int table[][COLS], int row, int col){
    for(int x = 0; x < row; x++){
        if(x != 0)
        	cout << endl;
		for(int y = 0; y<col; y++){
            cout << setw(4)<< table[x][y];
        }
    }
}

/*********************************************************
   Name: getSum
   Purpose: calculates the sum of all cells in the array
   Incoming: table[][], row, col
   Outgoing: sum
   Return: sum
*********************************************************/
int getSum(int table[][COLS], int row, int col){
    int sum = 0;
    for(int x = 0; x < row; x++)
        for(int y = 0; y<col; y++)
            sum += table[x][y];
    return sum;
}

/*********************************************************
   Name: getStats
   Purpose: calculates average and gets the minimum and maximum number in array
   Incoming: table[][], row, col, average, min, max
   Outgoing: average, min, max
   Return: none
*********************************************************/
void getStats(int table[][COLS], int row, int col, double& average, int& min, int& max){
    int count = 0, sum = 0;
    min = max = average = 0;
    sum = getSum(table, row, col);
    min = table[0][0];
    max = table[0][0];
    
    for(int x = 0; x < row; x++){
        for(int y = 0; y<col; y++){
            count++;
            if(table[x][y] < min)
                min = table[x][y];
            if(table[x][y] > max)
                max = table[x][y];
        }   
    }
    average = (double)sum/count;
}

/*********************************************************
   Name: printDiagonal
   Purpose: gets the numbers that are diagonal starting from top left to bottom right
   Incoming: table[][], row, col
   Outgoing: table[][] or message if table is not square
   Return: none
*********************************************************/
void printDiagonal(int table[][COLS], int row, int col){
    if(row == col){
        for(int x = 0; x < row; x++){
        	if(x != 0)
        		cout << endl;  
            for(int y = x; y<=x; y++)
                cout << table[x][y] << " ";        
        }
        cout << endl;
    }
    else
        cout << "The matrix isn't square - Not printing Diagonal" << endl;
}

/*********************************************************
   Name: menu
   Purpose: displays menu options
   Incoming: choice
   Outgoing: console displays options, choice
   Return: choice
*********************************************************/
int menu(int choice){
	if (choice == -1){
    	cout << "Please select and option" << endl
		 	<< "1. Fill Matrix" << endl
		 	<< "2. Print Matrix" << endl
		 	<< "3. Get Sum" << endl
		 	<< "4. Get Stats (minimum, maximum, average)" << endl
		 	<< "5. Print Diagonal" << endl
		 	<< "6. View this menu again" << endl
		 	<< "Enter 0 to quit" << endl;
    }
    if(choice != 0){
		cout << "Please make a choice (6 to see menu): ";
		cin >> choice;
	}
	if(choice > 6 || choice < 0){
		choice = 6;
		cout << "Invalid option" <<endl;
	}
	return choice;
}

