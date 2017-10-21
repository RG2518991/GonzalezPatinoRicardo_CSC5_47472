/* 
   File:   main
   Author: Ricardo Gonzalez Patino 
   Created on October 02, 2017, 10:08 PM
   Purpose:Mass and Weight 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    float mass, weight;

 cout << "\n+++++++++++++++++++++++++++++\n"
  << "        Mass and Weight"
  << "\n+++++++++++++++++++++++++++++\n";

 cout << "Enter an object's mass (in Kilograms): ";
 cin >> mass;

 weight = mass * 9.8;

 if(weight > 1000)
 {
 cout << "The mass is: " << weight << " newtons \n\n";
 cout << "The object's mass is TOO heavy :( !!\n\n";
 }
 if(weight < 10)
 {
 cout << "The mass is: " << weight << " newtons \n\n";
 cout << "The object's mass is too Light !! \n\n";
 }
 if(weight >=10 && weight <=1000)
 {
 cout << "The mass is: " << weight << " newtons \n\n";
 }

    
    
    return 0;
}