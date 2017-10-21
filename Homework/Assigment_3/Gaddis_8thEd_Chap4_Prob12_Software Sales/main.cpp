/* 
   File:   main
   Author: Ricardo Gonzalez Patino
    Created on October 08, 2017, 10:08 AM
   Purpose: Software Sales  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>   // Format 
using namespace std;  //Name-space used in the System Library
 
int main(int argc, char** argv) 
{
	const float RETAIL = 99.00; // Normal retail price per unit before discount
	int    unitsPurchased;       // Number of units purchased
	float discountPct,          // % discount based on sales volume
		   totalCost;            // Total cost (for all units purchased) after discount
 
	// Input number of units sold
	cout << "How many units are being purchased? ";
	cin  >> unitsPurchased;
 
	// Determine discount percentage
	if (unitsPurchased <= 0)
		cout << "Units purchased must be greater than zero.\n";
	else
	{
		if (unitsPurchased < 10)
			discountPct = 0.00;
		else if (unitsPurchased <= 19)
			discountPct = 0.20;
		else if (unitsPurchased <= 49)
			discountPct = 0.30;
		else if (unitsPurchased <= 99)
			discountPct = 0.40;
		else // unitsPurchased was 100 or more
			discountPct = 0.50;
 
		// Calculate total cost
		totalCost = unitsPurchased * RETAIL * (1 - discountPct);
 
		// Display formatted result
		cout << fixed << showpoint << setprecision(2);
		cout << "The total cost of the purchase is $" << totalCost << endl;
	}
	return 0;
}