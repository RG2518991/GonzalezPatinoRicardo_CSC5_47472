/* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on September 22th, 11:45 AM
   Purpose: Stadium Seating. There are seating categories for a softball
 * game. The program will ask how many tickets were sold for each class
 * then displays the amount of income generated from tickets sales.
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

float classA = 15, classB = 12, classC = 9;
float numberA, numberB, numberC;
float total;
 
cout << "How many tickets were sold for Class A? >> ";
cin >> numberA;
cout << "How many tickets were sold for Class B? >> ";
cin >> numberB;
cout << "How many tickets were sold for Class C? >> ";
cin >> numberC;
 
cout << setprecision(2) << fixed;
cout << "Sales from Class A: $" << numberA * classA << endl;
cout << "Sales from Class B: $" << numberB * classB << endl;
cout << "Sales from Class C: $" << numberC * classC << endl;
 
total = (numberA*classA) + (numberB*classB) + (numberC*classC);
 
cout << "Total sales generated: $" << total << endl << endl;
 
 
return 0;
}
