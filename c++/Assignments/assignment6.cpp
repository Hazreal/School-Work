/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Assignment 6                                  */
/*  Program that takes password and confirms its  */
/*  validity        					          */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: April 5th , 2017                        */
/*                                                */
/**************************************************/
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
const int MAX_LENGTH = 9, PASS_LENGTH = 8;							//declare global constants
bool validPass(char password[]);	
int main(){
	char password[MAX_LENGTH];
	cout << "Password must consist of 8 uppercase and lowercase letters and digits" << endl;
	cout <<"Enter password: ";
	cin.getline(password, MAX_LENGTH);	
	
	if(validPass(password))															//Check if password is valid
		cout << "Your password is valid" << endl;
	else
		cout << "Your password is invalid" << endl;
	return 0;
}
/***************************************************** 
   Name: validPass
   Purpose: To check if a password is valid
   Incoming: char array password
   Outgoing: isValid as either true or false;
   Return: boolean value of true or false
*****************************************************/
bool validPass(char password[]){
	bool hasUpper = false, hasLower = false, hasDigit = false, isValid = false;
	if (strlen(password) == PASS_LENGTH){
		for(int x = 0; x < strlen(password); x++){						//Loop through array
			if(isupper(password[x]))							//Check for uppercase
				hasUpper = true;
			else if (isdigit(password[x]))						//Check for digit
				hasDigit = true;
			else if (islower(password[x]))						//check for lowercase
				hasLower= true;
		}
	}
	if (hasUpper == true && hasLower == true && hasDigit == true)				//if all are true set is valid to true
		isValid = true;
	return isValid;
}

