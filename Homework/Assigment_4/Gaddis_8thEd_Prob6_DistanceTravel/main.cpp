
/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 13, 2017, 12:44 PM
 * Purpose:Distance Traveled  
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
#include <iomanip>
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Program execution begins here!
int main(int argc, char** argv) 
    {
	int Speed,
		Hours,
		Distance = 0; 	// Set accumulator to 0

	// Ask the user to input the speed
	cout << "What is the speed of the vehicle in mph? ";
	cin  >> Speed;
	cout << "How man hours has it traveled? ";
	cin  >> Hours;

	if (Speed >= 0 && Hours >= 1)
	{
		cout << "Hour   Distance Traveled\n"
		 << "--------------------------------\n";

		for (int X = 1; X <= Hours; X++)
		{
			
			Distance += Speed;
			cout << right << setw(4) << X << "        ";
			cout << setw(6) << Distance << endl;
		}
	}
	return 0;
}
   