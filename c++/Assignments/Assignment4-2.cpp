/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Assignment 4 - Problem 2                      */
/*  Program that calculates area and circumference*/
/*  of a circle given the radius     	          */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: Febuary 21, 2017                        */
/*                                                */
/**************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double area =0, radius = 0, circumference = 0;
    char reply = 'Y';
	 																													
    while (reply != 'N' && reply != 'n'){			//Check for capitalized or lowercase N
        cout << "Enter the radius of a circle: ";
        cin >> radius;
		area =  M_PI*pow(radius,2);					//area pi*r^2 
		circumference = 2 * M_PI * radius;			//Circumfrence 2 pi * radius
		cout << setprecision(1) << fixed << "Area: " << area << " Circumference: " << circumference << endl;
		cout << "Go again? (Y/N) ";					
		cin >> ws;									//clear whitespace
		reply = cin.get();  						//get response
        
    }
	return 0;
}
