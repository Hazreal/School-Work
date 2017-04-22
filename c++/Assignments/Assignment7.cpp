/**************************************************/
/*                                                */
/*  CS155 - Computer Science 1                    */
/*  Spring Semester, 2017                         */
/*  Assignment #7                                 */
/*  Program that takes a number of judges scores  */
/*  and removes the high and low and then gets    */
/*  the average.                                  */
/*  Programmer: Adam Risher                       */
/*  Date: April 11th , 2017                        */
/*                                                */
/**************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

double averageScore(int scores[], int judges);
void getScores(int scores[], int judges);
int main(){
	int judges = 0;
	double average = 0;
	cout << "How many judges are there? ";
	cin >> judges;
	int scores[judges];
	getScores(scores, judges);
	average = averageScore(scores, judges);
	
	cout << "The average score was: " << setprecision(1) << fixed << average << endl;
	
	return 0;
}

/***************************************************** 
   Name: averageScore
   Purpose: To calculate average after high and low score are removed
   Incoming: int array of scores, number of judges
   Outgoing: average of the scores
   Return: double average
*****************************************************/
double averageScore(int scores[], int judges){
	double average = 0;
	int max = scores[0];
	int min = scores[0];
	
	for(int x = 0; x < judges; x++){
		if(scores[x] > max)
			max = scores[x];
		if(scores[x]<min)
			min = scores[x];
		average += scores[x];	
	}
	average = (average - min - max)/(double)(judges-2); //we remove the max and min scores from the calculation
	return average;										//as well as 2 judges from the judge total to get average
}

/***************************************************** 
   Name: getScores
   Purpose: To recieve input of scores
   Incoming: int array of scores, number of judges
   Outgoing: none
   Return: none
*****************************************************/

void getScores(int scores[], int judges){
	for(int x = 0; x < judges; x++){
		cout << "Enter the score from judge #" << x+1 << ": ";
		cin >> scores[x];
	}
}
