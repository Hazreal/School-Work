/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Assignment #2                                 */
/*  Calculating on-base-percentage using          */
/*  user input                                    */
/*                                                */
/*  Programmer: Adam Risher                       */
/*  Date: January 17, 2017                        */
/*                                                */
/**************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double hits, walks, hitByPitches, atBat, sacrifices, onBasePercentage; //declare variables
    
    cout << "Computing the On Base Percentage" << endl << endl; 
    cout << "Enter Hits: "; 
    cin >> hits;                                                           //get hits
    cout << "Enter Walks: ";
    cin >> walks;                                                          //get walks
    cout << "Enter Hits By Pitches: ";
    cin >> hitByPitches;                                                   //get hitByPitches
    cout << "Enter Sacrifices: ";
    cin >> sacrifices;                                                     //get sacrifices
    cout << "Enter At Bats: ";
    cin >> atBat;                                                          //get atBat
    
    onBasePercentage = (hits + walks + hitByPitches)/(atBat + walks + hitByPitches + sacrifices); //calculate onBasePercentage
    cout << "The on-base-percentage is: " << setprecision(3) << fixed << onBasePercentage; //display on base percentage

    return 0;
}

