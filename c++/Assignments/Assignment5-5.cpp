/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Assignment 5 - Problem 5                      */
/*  Program that calculates freethrow percentage  */
/*  given the attempted and made throws           */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: Febuary 23, 2017                        */
/*                                                */
/**************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double percent = 0; 
	int attempted = 0, made = 0;
	
	do {
		cout << "Enter the number of freethrows attempted: ";
		cin >> attempted;
	}while(attempted < 1);
	
	do {
		cout << "Enter the number of freethrows made: ";
		cin >> made;
	} while(made < 0 || made > attempted);
	
	percent = ((double) made/attempted) * 100;
	
	if(percent >= 50)
		cout << setprecision(1) << fixed << percent << "% Congrats Practice pays off!" << endl;	
	else
		cout << setprecision(1) << fixed << percent << "% You should Practice more!" << endl;
	return 0;
}
