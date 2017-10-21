
/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 19, 2017, 3:11 PM
 * Purpose:Hotel Occupancy  
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Program execution begins here!
int main(int argc, char** argv) {
    
    const int OCC = 120; // Total occupancy of hotel

	int    Floor,		 // Hotel Floor
		   TtlSte = 0,	 // Accumulator initialized to 0
		   StePerFlr;	 // Suites per floor
	float PctOfSte;	 // Percentage of suites occupied

		// Single loop that loop once for each floor between 10 and 16
		for (Floor = 10; Floor <= 16; Floor++)
		{
			// There is no 13th floor
			if (Floor == 13)
			continue; 

			do
			{	// Ask user to input the number of suites occupied on each floor
				cout << "Hotel suite occupancy calculator\n"
					 << "How many suites are occupied on the " << Floor
					 << "th floor? ";
				cin  >> StePerFlr;

				if(StePerFlr < 0 || StePerFlr > 20)
				{  // Tell user that  number of suites occupied cannot be
				   // less than 0 or more than 20.
					cout << "\nError! Invalid suite amount.\n"
						 << "Number of suites must be greater than 0"
						 << " and less than 20.\n\n";
				}
				// Input Validation for number of suites
			} while (StePerFlr < 0 || StePerFlr > 20);

			TtlSte += StePerFlr; 	// Accumulate Total number of suites
		}

		// Calculate the percentage of suites occupied
		PctOfSte = (static_cast<double>(TtlSte) / OCC) * 100;

		// Display how many suites the hotel has, how many of them are
		// occupied, and what percentage of them are occupied
		cout << "\nTotal number of suites in the hotel: " << OCC << endl
			 << "Total number of suites occupied    : " << TtlSte << endl
			 << "Percentage of suites occupied      : " << PctOfSte << "\%" 
			 << endl <<endl;

		return 0;
}
