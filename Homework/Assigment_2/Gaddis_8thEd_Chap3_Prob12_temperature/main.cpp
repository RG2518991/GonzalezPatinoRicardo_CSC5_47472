/* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on September 20th, 2017, 12:41 AM
   Purpose:Conversation from Celsius to Fahrenheit 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variables 
    float fahrenheit, celsius;
 
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "The temperature in Celsius    : " << celsius << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}
