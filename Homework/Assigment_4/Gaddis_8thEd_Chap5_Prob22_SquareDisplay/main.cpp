 /* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 16, 2017, 11:16 PM
 * Purpose:  Square Display.
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Program execution begins here!
int main(int argc, char** argv) 

{

  	const string unit = "X";		
 	int length;					
 	int count;						
 	string line;			
 	string square;					
 
 	cout << " enter a positive number no greater than 15: "<< endl;
 	cin  >> length;
 
	if(length> 0 && length < 15)
		{	
 
			for(count =1; count <= length; count ++)
			line += unit;
 
 
			for(count =1; count <= length; count ++)
			square += (line + '\n');
		}
	else
		{
			cout << "The positive number must be less than 15." << endl;
			cout << "Please try again." << endl;
		}
	cout << square << endl;
return 0;
}
