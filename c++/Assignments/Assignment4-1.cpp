/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Assignment 4 - Problem 1                      */
/*  Program that sums and displays all even       */
/*  numbers between 2 inputs			          */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: Febuary 21, 2017                        */
/*                                                */
/**************************************************/


#include <iostream>

using namespace std;

int main(){
    int sum = 0, min = 0, max = 0;
    
    cout << "What is the minimum: ";
    cin >> min;
    cout << "What is the maximum: ";
    cin >> max;
    while (min <= max){													//loop while the minimum number is less than the maximum
        if (min%2 == 0){												//check if number is even
            sum+=min;													//add number to sum
            cout << "Even " << min << " Current Sum: " << sum << endl;	//print current even number and current sum
        }    
        min++;															//increment min
    }
    return 0; 
}
