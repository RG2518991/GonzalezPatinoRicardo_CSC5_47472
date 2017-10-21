
/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 19, 2017, 11:49 PM
 * Purpose:Population  
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
#include <iomanip>
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Program execution begins here!
int main(int argc, char** argv){
    
    int 	Days,				// The number of days they will multiply.
			SizeOfPop;			// The starting number of organisms.
	float 	DailyIncrease;		// The average daily population increase

	// Ask user for the starting number of organisms, their average daily
	// population increase (as a percentage of current population), and the number
	// of days they will multiply.
	cout << "This program will predict the size of a population of organisms.\n";
	cout << "What is the starting number of organisms? ";
	cin  >> SizeOfPop;
	cout << "What is the average daily population increase\n"
		 << "(as a percentage of current population)? ";
	cin  >> DailyIncrease;
	cout << "Enter the number of days of growth: ";
	cin  >> Days;

	// Input Validation
	while (SizeOfPop < 2 || DailyIncrease < 0 || Days < 1)
	{
		if (SizeOfPop < 2)
		{ // Do not accept a number less than two for the starting size of the
		  // population.
			cout << "Error!\nStarting size of population "
				 << "must be greater than 2.\n";
			cout << "What is the starting number of organisms? ";
			cin  >> SizeOfPop;
		}
		else if (DailyIncrease < 0)
		{ // Do not accept a negative number for average daily population increase.
			cout << "Error!\nAverage daily population "
				 << "increase must be greater than 0.\n";
			cout << "What is the average daily population increase? \n"
				 << "(as a percentage of current population)? ";
			cin  >> DailyIncrease;
		}
		else if (Days < 1)
		{ // Do not accept a number less than one for the number of days
		  // they will multiply.
			cout << "Error!\nNumber of days must be greater than 0.\n-5";
			cout << "Enter the number of days of growth: ";
			cin  >> Days;
		}
	}


	// Calculate and display daily increase
	cout << "\nTable displaying population increase over " << Days << " days.\n"
		 << "      Day              Size of population\n"
		 <<"--------------------------------------------------\n";


	for (int X = 1; X <= Days; X++)
	{
		cout << "      " << setw(2) << X << "                      "
			 << SizeOfPop << endl; 
		SizeOfPop *= (1 + (DailyIncrease / 100));
	}
	return 0;
}
