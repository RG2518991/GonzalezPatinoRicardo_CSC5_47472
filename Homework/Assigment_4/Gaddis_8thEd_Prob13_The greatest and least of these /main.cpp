
/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 17, 2017, 9:19 am
 * Purpose:The Greatest and Least of these   
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Program execution begins here!
int main(int argc, char** argv) {

	int Num,
		Largest,
		Smallest;

	cout << "Enter a series of numbers and the program will\n"
		 << "display the largest and smallest numbers entered\n"
		 << "Enter a number\n";
	cin	 >> Num;

	Largest = Smallest = Num;

	while (Num != -99)
	{			
		cout << "Enter a number\n";
		cin  >> Num;
		
		if (Num > Largest)
			Largest = Num;

		if (Num < Smallest)
			Smallest = Num;

	}
	cout << "The largest number entered is " << Largest << "." << endl;
	cout << "The smallest number entered is " << Smallest << "." << endl;
	return 0;
}