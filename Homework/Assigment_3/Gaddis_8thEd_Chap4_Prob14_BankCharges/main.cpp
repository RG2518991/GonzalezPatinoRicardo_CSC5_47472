
/* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on October 10, 2017, 11:08 AM
   Purpose:Bank Charges
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here!
 
int main()
{
	const float MO_FEE = 10.00;  // Base monthly fee charged to all accounts
 
	int    numChecks;             // Number of checks written during the month
	float checkFee,              // Fee based on number of checks written
		   totalFees;             // Total monthly bank fees
 
	// Input number of checks written
	cout << "Number of checks written this month: ";
	cin  >> numChecks;
 
	if (numChecks < 0)
		cout << "Number of checks must be zero or more.\n";
	else
	{  // Calculate checkFee		
		if (numChecks < 20)
			checkFee = numChecks * 0.10;
		else if (numChecks <= 39)
			checkFee = numChecks * 0.08;
		else if (numChecks <= 59)
			checkFee = numChecks * 0.06;
		else // 60 or more checks were written
			checkFee = numChecks * 0.04;
 
		// Calculate total fees
		totalFees = MO_FEE + checkFee;
 
		// Display the formatted result
		cout << fixed << showpoint << setprecision(2);
		cout << "\nThe bank fee this month is $" << totalFees << endl;
	}
	return 0;
}