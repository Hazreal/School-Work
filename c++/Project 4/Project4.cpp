/*************************************************
                                                
  CS155 - Computer Science 1                    
  Spring Semester, 2017                         
  Project #4 - Show me the Money                
  Create a vending machine that is able to take
  money and order selection and give back change     
  				                                              
  Programmer: Adam Risher                       
  Date: Tuesday March 7th, 2017                        
                                                
*************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

void choicePrint(int money, int change, int optionPrice, string optionName);

int main(){

	const int OPTION_ONE_PRICE = 45, OPTION_TWO_PRICE = 50, OPTION_THREE_PRICE = 75, OPTION_FOUR_PRICE = 100;
	const string OPTION_ONE_NAME = "Coke", OPTION_TWO_NAME = "Sprite", OPTION_THREE_NAME = "Pepsi", OPTION_FOUR_NAME = "Dr. Pepper";

	int money = 0, quarters = 0, nickles = 0, dimes = 0, choice = 0, change = 0;
	bool valid = false;

	while(true){
		money = 0;																		//reset money to 0 for next order
		cout << "Enter your money [45 - 100]: ";										//input for money entered
		cin >> money;
		
		if(money <45){																	// error for too little money
			cout <<"You did not enter enough money!" << endl;
			break;
		}
		else if(money > 100){															//error for too much money
			cout << "You entered too much money!" << endl;
			break;
		}
		else if(money%5 != 0){															//error for money being entered not in wrong denomination
			cout << "You must enter money in denominations of five." << endl;
			break; 
		}
		else{																			
			do{																						//begin loop and continue until valid = true;
					
				cout << "Price   Selections" << endl;												//output main selection menu
		       	cout << "******************" << endl;
		        cout << setw(5) << OPTION_ONE_PRICE   << "    " << OPTION_ONE_NAME   << endl;
				cout << setw(5) << OPTION_TWO_PRICE   << "    " << OPTION_TWO_NAME   << endl;
				cout << setw(5) << OPTION_THREE_PRICE << "    " << OPTION_THREE_NAME << endl;
				cout << setw(5) << OPTION_FOUR_PRICE  << "    " << OPTION_FOUR_NAME  << endl;	
	            cout << "Enter the price of the item you would like: ";								//get selection
	            cin >> choice;
	            
	            if(choice == OPTION_ONE_PRICE || choice == OPTION_TWO_PRICE || choice == OPTION_THREE_PRICE || choice == OPTION_FOUR_PRICE){	
					if(money - choice >= 0)															//order valid
						valid = true;
					else{
						cout << "You do not have enough money for this" << endl;					//order not valid
						valid = false;
					}
				}
				else {																				//order not valid
					cout << "The price you selected is not valid" << endl;	
					valid = false;
				}
	            
			}while(valid != true);
			
			switch(choice){
				case OPTION_ONE_PRICE: change = money - OPTION_ONE_PRICE;							//each case sets remaining money and sets change to money then calls choicePrint function
									   money -= OPTION_ONE_PRICE;
									   choicePrint(money, change, OPTION_ONE_PRICE, OPTION_ONE_NAME);
									   break;
				case OPTION_TWO_PRICE: change = money - OPTION_TWO_PRICE;
									   money -= OPTION_TWO_PRICE;
									   choicePrint(money, change, OPTION_TWO_PRICE, OPTION_TWO_NAME);
									   break;
				case OPTION_THREE_PRICE: change = money - OPTION_THREE_PRICE;
										 money -= OPTION_THREE_PRICE;
									     choicePrint(money, change, OPTION_THREE_PRICE, OPTION_THREE_NAME);
									     break;			
				case OPTION_FOUR_PRICE: change = money - OPTION_FOUR_PRICE;
										money -= OPTION_FOUR_PRICE;
									    choicePrint(money, change, OPTION_FOUR_PRICE, OPTION_FOUR_NAME);
									    break;
				Default: cout << "How'd you get here?";
			}
		}
			
	}

    return 0;
}

void choicePrint(int money, int change, int optionPrice, string optionName){
	int quarters = 0, nickels = 0, dimes = 0;
	
	quarters = money/25;												//determines proper change in individual demoninations
	money %= 25;
	dimes = money/10;
	money %= 10;
	nickels = money/5;
	money %= 5;
	
	cout << "You selected " << optionName << " which cost " << optionPrice << " cents." << endl;
	cout << "You will recieve " << change << " cents in change.";
 	if(quarters > 0 || dimes > 0 || nickels > 0 || money > 0){
		cout << " Which is ";														// outputs change in denominations with proper plurality.
		if (quarters > 0){
		 	cout <<  quarters;
			if (quarters > 1) 
				cout << " quarters ";
			else
				cout << " quarter ";
		}
		if (dimes > 0){
		 	cout <<  dimes;
			 if (dimes > 1)
			 	cout << " dimes ";
			else 
				cout << " dime ";
		}
		if (nickels > 0) {
		   	cout <<  nickels;
			if (nickels > 1) 
				cout << " nickels ";
			else
				cout << " nickel ";
		}
		if (money > 0){
		 	cout <<  money; 
			if (money > 1)
				cout << " pennies";
			else
				cout << "penny";
		}
	}
	cout << endl;
	 
}

