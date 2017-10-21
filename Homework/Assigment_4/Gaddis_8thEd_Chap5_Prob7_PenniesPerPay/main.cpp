/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 18, 2017, 1:07 PM
 * Purpose:Pennies Per Pay 
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
#include <iomanip>
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Program execution begins here!
int main(int argc, char** argv) {
    
	int Day,
		Worked,
		DailyPay = 1,
		Total = 0;

	// Ask user the number of days the employee works
	cout << "How many days did the employee work? ";
	cin  >> Worked;


	cout << "\nTable showing how much the\n"
		 << "salary was for each day worked:\n\n" 
		 << "   Day         Salary\n"
	     << "--------------------------\n";

	for(Day = 1; Day <= Worked; Day++)
	{
		
		cout << right << setw(5) << Day;
		cout << left << fixed << showpoint << setprecision(2)
		     << "           " << "$" << DailyPay << endl;
		Total += DailyPay;
		DailyPay *= 2;
	}
	cout << "\nTotal month's pay: $" << Total << endl;
	return 0;
}
    
    
    
   
