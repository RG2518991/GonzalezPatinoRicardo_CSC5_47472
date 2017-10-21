 /* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on October 8, 2017, 09:08 AM
   Purpose:Long Distance Calls 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
 

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
     float time, time2, minutes, charges;

 cout << "================================================\n"
  << "               Long distance calls\n"
  << "================================================\n\n";

 cout << "Enter the starting time of the call (HH.MM): ";
 cin >> time;

 time2 = time - static_cast<int>(time);  //gets the fractional part (minutes)

 if(time2 > .59)
 {
 cout << "Starting time (minutes) cannot be greater than 59!!\n\n"
  << "Enter the time again (HH.MM): ";
 cin >> time;
 }

 if(time > 23.59)
 {
 cout << "Starting time cannot be greater than 23:59!!\n\n"
  << "Enter the starting time again (HH.MM): ";
 cin >> time;
 }

 cout << "Enter the duration of the call (minutes): ";
 cin >> minutes;
 if(minutes < 0)
 {
 cout << "Minutes cannot be less than 0!!\n\n"
  << "Enter the duration of the call (minutes) again: ";
 cin >> minutes;
 }

 cout << fixed << setprecision(2);
 if(time >= 0.00 && time <= 6.59)
 {
 charges = minutes * 0.12;
 cout << "Cost for the call: $" << charges << "\n\n";
 }
 if(time >= 7.0 && time <= 19.0)
 {
 charges = minutes * 0.55;
 cout << "Cost for the call: $" << charges << "\n\n";
 }
 if(time >= 19.01 && time <= 23.59)
 {
 charges = minutes * 0.35;
 cout << "Cost for the call: $" << charges << "\n\n";
 }
    return 0;
}
