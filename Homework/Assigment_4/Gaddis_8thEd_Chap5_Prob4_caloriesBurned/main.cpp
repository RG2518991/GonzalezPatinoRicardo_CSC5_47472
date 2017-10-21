
/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 18, 2017, 7:16 PM
 * Purpose:Calories burned  
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Program execution begins here!
int main(int argc, char** argv) {
    	const float CALORIES_PER_MIN = 3.9;

	int Min,
		Burnt = 0; 		// Acummulator set to 0

	cout << "\nTable displaying number of calories burnt on a\n"
		 << "treadmill that burns 3.9 calories per minute.\n"
		 << "\n   Minutes Ran      Calories Burnt\n"
		 << "------------------------------------------\n";

	for(Min = 10; Min <= 30; Min += 5)
	{
		Burnt = Min * CALORIES_PER_MIN;
		cout << "        "<< Min << "               " << Burnt << endl; 
	}
	cout << endl;
	return 0;
}
