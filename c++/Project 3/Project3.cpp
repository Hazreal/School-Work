/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Project #3 - Leo's Pizza Parlor               */
/*  Get input from user on how many pizzas and    */
/*  drinks to order						          */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: Febuary 14, 2017                         */
/*                                                */
/**************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int whitespace(int count);

int main(){
	
	const double CHEESE_PIZZA_PRICE = 7.25, MEAT_PIZZA_PRICE = 12.75, CC_PIZZA_PRICE = 9.5, SALAD_PRICE = 2.75, BEVERAGE_PRICE = 1.25; //initialize all variables
	int pizzaChoice = 0, beverageCount = 0, saladCount = 0;
	double pizzaTotal = 0, saladTotal = 0, beverageTotal = 0, grandTotal = 0;
	string pizzaName;
	
	cout << "Leo's Pizza Parlor Order System" << endl << endl;
	
	cout << "1. Cheese Pizza $7.25" << endl;
	cout << "2. Meat Lovers Pizza $12.75" << endl;
	cout << "3. Cookie Pizza $9.50" << endl;
	cout << "Select your pizza (1-3)? ";
	cin >> pizzaChoice;																												// Get user pizza selection
	
	if (pizzaChoice < 1 || pizzaChoice > 3)																							//Check user selection to be between 1 and 3
	{
		cout << "Pizza choice should be a number 1 through 3!";
		
	}
	else 
	{
		switch(pizzaChoice)																											//Changes pizza name string to proper pizza name and assigns proper price to pizza total
		{
			case 1 : pizzaName = "Cheese Pizza     ";
					 pizzaTotal = CHEESE_PIZZA_PRICE;
					 break;	
			case 2 : pizzaName = "Meat Lovers Pizza";
					 pizzaTotal = MEAT_PIZZA_PRICE;
					 break;
			case 3 : pizzaName = "Cookie Pizza     ";
					 pizzaTotal = CC_PIZZA_PRICE;
					 break;
			Default:
					 cout << "An error has occurred, the value entered does not match a case! You shouldn't have been able to get here";
					 return 0;		 		 
		}
		
		cout << endl << "Beverages are $1.25. How many beverages? ";															
		cin >> beverageCount;																										// Get beverage count input
		if (beverageCount < 0)																										// checks beverage count to insure non-negative number
		{	
			cout << "You cannot have less than 0 beverages!";	
		}
		else
		{
			beverageTotal = beverageCount * BEVERAGE_PRICE;																			//Calculate beverage total
				
			cout << endl << "Salads are $2.75. How many salads? ";
			cin >> saladCount;																										//gets salad count input
			if (saladCount < 0)																										// Checks salad count to insure non-negative number
			{
				cout << "You cannot have less than 0 salads!";
			}
			else
			{
			saladTotal = saladCount * SALAD_PRICE;																					//calculate salad total
			
			grandTotal = pizzaTotal + beverageTotal + saladTotal;																	// calculate grand total
			
			cout << endl << endl << "---------------INVOICE---------------" << endl;
			cout << pizzaName << setw(10) <<  setprecision(2) << fixed << pizzaTotal << endl;										//outputs pizza name and pizza total
			if (beverageCount > 0)
				cout << beverageCount << " beverage(s)" << setw(14 - whitespace(beverageCount)) <<  setprecision(2) << fixed << beverageTotal << endl; //outputs beverage count and total only if beverages were greater than 0
			if (saladCount > 0)
				cout << saladCount << " salad(s)" << setw(17 - whitespace(saladCount)) << setprecision(2) << fixed << saladTotal << endl;				//outputs salad count and total only if salads were greater than 0>
			cout << "Total Due:" << setw(17) << setprecision(2) << fixed << grandTotal << endl;															// outputs grand total
			}
		}
	}
	return 0;
}


int whitespace(int count){																											//function is used to help set correct amount of whitespace above for the beverages and salads due to the varying lengths of their lines
	int num = 0;
	if (count >= 10 && count <=99)
		num = 1;
	else if (count >= 100 && count <= 999)
		num = 2;
	else if (count >= 1000 && count <= 9999)
		num = 3;
	else if (count > 9999)
		cout << "Careful you wont have enough pizza to go with all of this!";														
	return num;	
}
