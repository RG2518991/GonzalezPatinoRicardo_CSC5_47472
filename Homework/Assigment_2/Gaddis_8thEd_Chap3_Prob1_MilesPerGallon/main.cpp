/* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on September 22th, 11:48 AM
   Purpose:  Miles Per Gallon.Program should ask the user to enter
 * the number of gallons of gas the car can hold and the number of 
 * miles it can be driven on a full tank. 
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

float mileage;//number of milage
float tanksize;// size of car tank
float distance;// distance car can drive

cout<<"Enter mileage \n";
cin>>mileage;

cout<<"Enter tanksize \n";
cin >> tanksize;

distance = mileage * tanksize;

cout<< distance;

cin.ignore().get();
    
    
    return 0;
}

