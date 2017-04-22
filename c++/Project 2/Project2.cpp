/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Project #2 - Save the Date                    */
/*  Convert input Date from ISO 8601 format       */
/*  to the US Format					          */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: January 31, 2017                        */
/*                                                */
/**************************************************/


#include <iostream>
#include <cmath>
using namespace std;

int	dateTrim(int isoDate, int divideBy);								//declared functions, explanation below
int	datePull(int isoDate, int divideBy);

int main()
{
	int isoDate=0, pullYear= 10000, pullMonth=100, pullDay=1, usYear=0, usMonth=0, usDay=0, length=1, isoDateCopy=0;
		
	cout << "Enter a Date in ISO 8601 Format: ";
	cin >> isoDate;
	
	isoDateCopy=isoDate;												//checks length of isoDate
	while (isoDateCopy /=10)
		length++;
	
	if (length == 8 && isoDate > 0)													//Checks length of integer entered 
	{
		usYear = datePull(isoDate, pullYear);
		isoDate = dateTrim(isoDate, pullYear);
		usMonth = datePull(isoDate, pullMonth);
		isoDate = dateTrim(isoDate, pullMonth);
		usDay = datePull(isoDate, pullDay);

        if ((usMonth > 12 || usMonth < 1) && (usDay > 31 || usDay < 1)) //Checks both Day and Month are within 1-31 and 1-12 respectivly
            cout << "Invalid Input, Month should be between 1 and 12, and Day should be between 1 and 31";
		else if (usMonth > 12 || usMonth < 1)							//Checks Months to ensure between 1 and 12
			cout << "Invalid Input, Month should be between 1 and 12";
		else if (usDay > 31 || usDay < 1)								//Checks that Days are between 1 and 31
			cout << "Invalid Input, Day should be between 1 and 31";
		else if (usMonth == 2 && usDay > 28 )
			cout << "Invalid Input, Febuary only has 28 days";			//Checks for Febuary days over 28
		else
		cout << usMonth << "/" << usDay << "/" << usYear;				//Outputs US date
	}
	else
		cout << "Invalid Input, Input should be 8 digits long.";
	return 0;
}

int dateTrim(int isoDate, int divideBy)									//Function to trim Date after getting Number
{
	return isoDate%divideBy;
}

int datePull(int isoDate, int divideBy)									//returns number from ISO Date
{
	return isoDate/divideBy;
}
