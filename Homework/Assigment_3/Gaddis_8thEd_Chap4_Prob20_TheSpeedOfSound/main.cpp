/* 
   File:   main
   Author: Ricardo Gonzalez Patino 
   Created October 06, 2017, 8:08 PM
   Purpose:  The Speed of Sound.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include<iomanip>
#include<string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
 

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    
 float distance, time;
 int choice;

 const float AIR = 1100,
         WATER = 4900,
    STEEL = 16400;

 const int AIR_CHOICE = 1,
    WATER_CHOICE = 2,
    STEEL_CHOICE = 3,
    QUIT_CHOICE = 4;

 //display the menu and get a choice
 cout << "\t\tThe Speed of Sound: Medium Menu \n\n"
  << "1.  Air Medium \n"
  << "2.  Water Medium \n"
  << "3.  Steel Medium \n"
  << "4.  Quit the Program \n\n"
  << "Enter your choice: ";
 cin >> choice;

 cout << fixed << showpoint << setprecision(4);

 switch(choice)
 {
 case AIR_CHOICE:
 cout << "Enter the distance (in feet): ";
 cin >> distance;
 
 if(distance < 0)
 {
 cout << "Distance cannot be less than 0!! \n\n"
      << "Enter the distance again: ";
 cin >> distance;
 }
 time = distance/AIR;
 cout << "It will take about " << time << " seconds. \n\n";
 break;

 case WATER_CHOICE:
 cout << "Enter the distance (in feet): ";
 cin >> distance;

 if(distance < 0)
 {
 cout << "Distance cannot be less than 0!! \n\n"
  << "Enter the distance again: ";
 cin >> distance;
 }
 time = distance/WATER;
 cout << "It will take about " << time << " seconds. \n\n";
 break;

 case STEEL_CHOICE:
 cout << "Enter the distance (in feet): ";
 cin >> distance;

 if(distance < 0)
 {
 cout << "Distance cannot be less than 0!! \n\n"
  << "Enter the distance again: ";
 cin >> distance;
 }
 time = distance/STEEL;
 cout << "It will take about " << time << " seconds. \n\n";
 break;

 case QUIT_CHOICE:
 cout << "The Program is ending... \n\n";
 break;

 default:
 cout << "The valid choices are 1 - 4. \n"
  << "Run the program again. \n\n";

 }
    
    
    
    return 0;
}