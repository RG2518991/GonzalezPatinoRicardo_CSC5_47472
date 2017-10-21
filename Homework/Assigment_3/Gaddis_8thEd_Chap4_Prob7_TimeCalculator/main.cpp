/* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on October 04, 2017, 1:08 AM
   Purpose: Time Calculator  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>   // Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
 

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    	const int SecPrDay = 86400,    // Number of seconds in a day
		      SecPrHr = 3600,    // Number of seconds in an hour
			  SecPrMin = 60;    // Number of seconds in a minute
 
	float seconds;                   // Length of time measured in seconds
 
	// Input the number of seconds
	cout << "This program will convert seconds to days, hours, or minutes. \n\n";
	cout << "Enter the number of seconds (60 or more): ";
	cin  >> seconds;
 
	// Set the output format
	cout << fixed << setprecision(2);
 
	// Determine and print the corresponding number of days, hours,
	// or minutes depending on the number of seconds entered
	if (seconds >= SecPrDay)
		cout << "This equals " << seconds / SecPrDay << " days. \n";
	else if (seconds >= SecPrHr)
		cout << "This equals " << seconds / SecPrHr << " hours. \n";
	else if (seconds >= SecPrMin)
		cout << "This equals " << seconds / SecPrMin  << " minutes. \n";
	else
		cout << "This is less than one minute.";
    
    
    
    
    
    return 0;
}
