/*************************************************
                                                
  CS155 - Computer Science 1                    
  Spring Semester, 2017                         
  Project #5 - Triangles, triangles, triangles               
  Read input from a file and calculate perimeter
  and area for a triangle     
  				                                              
  Programmer: Adam Risher                       
  Date: Tuesday March 14th, 2017                        
                                                
*************************************************/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

/***************Function Prototypes***********/
double calcPerimeter(double sideOne, double sideTwo, double sideThree);             
double calcArea(double sideOne, double sideTwo, double sideThree);
/**************End of Function Prototypes****/

int main(){
    int count = 0;
    double sideOne = 0, sideTwo = 0, sideThree = 0, area = 0, perimeter = 0;
    ifstream input;
    
    input.open("project5.txt");                                                                   //Open file
    if(!input){                                                                                   //Error if file can't be open
        cout << "Can't open file!" << endl;
        exit(1);
    }
    cout << setw(8) << "Side1" << setw(8) << "Side2" << setw(8) << "Side3" << setw(12) << "Perimeter" << setw(8) << "Area" << endl; //Header for triangles sides, area and perimeter
    while(!input.eof()){
        input >> sideOne >> sideTwo >> sideThree;                                                                                   //get inputs from file and store in file    
        if (input){                                                                                                                  
            perimeter = calcPerimeter(sideOne, sideTwo, sideThree);                                                                 //call functions to get area and perimeter
            area = calcArea(sideOne, sideTwo, sideThree);
            cout << setprecision(2) << fixed << setw(8) << sideOne << setw(8) << sideTwo << setw(8) << sideThree << setw(11) << perimeter << setw(10) << area << endl; //output triangle sides, area and perimeter
            count++;
        }
    }    
    cout << setw(15) << count << " Total Triangles" << endl;                                                   //output triangle count
    input.close();
    return 0;
}


/**************************************************
                 Function Definitions
**************************************************/

 /*************************************************
	Name: calcPerimeter
    Purpose: Calculates the perimeter of a triangle
	Incoming: sideOne, sideTwo, sideThree
	Outgoing: The perimeter of the triangle
    Return: perimeter (double)
*************************************************/
double calcPerimeter(double sideOne, double sideTwo, double sideThree){
    double perimeter = 0;
    perimeter = sideOne + sideTwo + sideThree;
    return perimeter;
}

 /*************************************************
	Name: calcArea
    Purpose: Calculates the area of a triangle
	Incoming: sideOne, sideTwo, sideThree
	Outgoing: The Area of the triangle
    Return: area (double)
*************************************************/
double calcArea(double sideOne, double sideTwo, double sideThree){             
    double semiPerimeter = 0, area = 0;
    semiPerimeter = calcPerimeter(sideOne,sideTwo, sideThree)/2;
    area = (semiPerimeter*(semiPerimeter- sideOne)*(semiPerimeter- sideTwo)*(semiPerimeter- sideThree));
    if(area < 0)
        area *= -1;
    area =sqrt(area);
    return area;
}
