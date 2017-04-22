/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Assignment 4 - Problem 3                      */
/*  Program that displays all even digits of an   */
/*  input number			           			  */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: Febuary 21, 2017                        */
/*                                                */
/**************************************************/
#include <iostream>

using namespace std;

int main(){
	int input = 0, trimNum =0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	while (input != 0){					// != 0 insures that negative numbers work
		trimNum = input%10;				// get last digit
		input /= 10;					//remove last digit
		if(trimNum%2 == 0)				//make sure the digit is even to print it out
			cout << trimNum << endl;
	}	
		
	return 0;
}
