
/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 20, 2017, 8:11 PM
 * Purpose Math Tutor  
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Program execution begins here!
int main(int argc, char** argv) {

	int Choice, Input, Answer, Num1, Num2, seed;

	do
	{
		seed = time(0);		// Random generator seed.

		// Get a "seed" value and random numbers
		srand(seed);
		Num1 = 10 + rand() % 50;
		Num2 = 10 + rand() % 50;

		cout << "  Math Tutoring Menu\n"
			 << "----------------------\n"
			 << "1. Addition\n"
			 << "2. Subtraction\n"
			 << "3. Multiplication\n"
			 << "4. Quit Menu\n"
			 << "Select a problem type by entering\n"
			 << "its number or enter 4 to quit.\n";
		cin  >> Choice;

		if (Choice >= 1 && Choice <= 3)
		{		
			
			cout << "Enter the answer to the following problem:\n";
			cout << "   " << Num1 << endl;
			// Calulate the two random numbers.
			switch (Choice)
			{
				case 1 : cout << " + "; 
						 Answer = Num1 + Num2;
						 break;
				case 2 : Answer = Num1 - Num2;
						 cout << " - ";
						 break;
				case 3 : Answer = Num1 * Num2;
						 cout << " * ";
						 break;  
			}

			// Display two random numbers and ask user to enter the Answer.
			cout << Num2 << endl;
			cout << " ------\n   ";
			cin  >> Input;
			
			if (Input == Answer)
				cout << "\nCongratulations! " << Input
					 << " is the correct answer.\n\n";
			else
			{
				cout << "\nIncorrect answer!\n";
				cout << "The correct answer is " << Answer << endl << endl;
			}
		} 
		if (Choice < 1 || Choice > 4)
		{	// Input Validation: If the user selects an item not on the menu,
			// display an error message and display the menu again.
			cout << "Error! Invalid choice.\n";
		}
		if (Choice == 4)
			cout << "Exiting! Goodbye....\n\n";
		
	} while (Choice != 4);
	return 0;
}