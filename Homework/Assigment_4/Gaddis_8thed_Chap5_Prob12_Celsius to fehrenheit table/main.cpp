
/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 18, 2017, 4:16 PM
 * Purpose:Celsius to Fahrenheit Table  
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
#include <iomanip>
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Program execution begins here!
int main(int argc, char** argv) {
   
	float  C,
		   F;

	cout << "Table of the Celsius temperatures from 0\n"
		 << "to 20 and their Fahrenheit equivalents:\n\n"
		 << "Celsius     Fahrenheit\n"
		 << "----------------------\n";

	for(C = 0; C <= 20; C++)
	{

		F = (9/5 * C) + 32;
		cout << right << setw(4) << C;
		cout << setw(14) << F << endl;
	}
	cout << endl;
	return 0;

}