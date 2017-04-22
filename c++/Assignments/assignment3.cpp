/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Assignment #3                                 */
/*  Calculating future value and interest gained  */
/*  using user input                              */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: January 19, 2017                        */
/*                                                */
/**************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double presentValue=0, interestRate=0, futureValue=0, interestEarned=0;
	int years=0, numOfPeriods=0;
	
	cout << "This program will compute the future value of an investment" << endl << endl;
	cout << "How much to invest? ";
	cin  >> presentValue;																	//Get PresentValue
	cout << "How many compoundings per year (i.e., 12 for monthly)? ";						
	cin  >> numOfPeriods;																	//Get number Of Periods
	cout << "What is the annual rate (i.e., 5.75)? ";
	cin  >> interestRate;																	//Get interest rate
	cout << "How many years? ";
	cin  >> years;																			//Get years
	
	interestRate = interestRate/100.0;														//convert interest rate to decimal
	futureValue = presentValue * pow(1 + interestRate/numOfPeriods, numOfPeriods * years);	//calculate future value
	

	cout << endl << "The future value is" << setw(2) << "$" << setprecision(2) << fixed << futureValue
		 << endl << "Interest earned is" << setw(3) << "$" <<  futureValue - presentValue;	//interest gained is future value minus present value
	return 0;	
}
