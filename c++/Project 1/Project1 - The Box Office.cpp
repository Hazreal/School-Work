/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Project #1 - The Box Office                   */
/*  Calculate Box Office Profit, Distributor      */
/*  Amount and Net profit using user input        */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: January 24, 2017                        */
/*                                                */
/**************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/* Declare Constants */
	const double DISTRIBUTORRATE = .8;
	const double ADULTTICKET = 7.5;
	const double CHILDTICKET = 4.75;
	
	/* Decalare Other variables */
	char movieName[25];
	int adultTicketSold=0, childTicketSold=0;
	double grossProfit=0, distributorAmount=0, netProfit=0;
	
	cout << "What is the name of the movie? ";	//Get Movie name
	cin.getline(movieName, 25);
	
	cout << "How many adult tickets sold? "; //Get adult tickets sold
	cin >> adultTicketSold;
	
	cout << "How many children tickets sold? "; //Get children tickets sold
	cin >> childTicketSold;
	
	grossProfit = (adultTicketSold * ADULTTICKET) + (childTicketSold * CHILDTICKET); //Calculate Gross Profit
	distributorAmount = grossProfit * DISTRIBUTORRATE;								 //Calculate Distributor Cut
	netProfit = grossProfit - distributorAmount;									 //Calculate net profit
	
	cout << endl << "Movie Name:" << setw(24) << movieName << endl					//output of all information
		 << "Gross Box Office Profit:" << setw(3) << "$" << setprecision(2) << fixed << grossProfit << endl
		 << "Distributor Amount:" << setw(8) << "$" << setprecision(2) << fixed << distributorAmount << endl
		 << "Net Profit:" << setw(16) << "$" << setprecision(2) << fixed << netProfit;
	 
	return (0);
}

