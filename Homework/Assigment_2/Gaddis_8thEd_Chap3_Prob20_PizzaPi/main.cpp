/* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on September 22th, 09:45 PM
   Purpose:  Pizza Pie
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
 
using namespace std;
 
int main(int argc, char** argv) 
{
 float pizzaDiameter;
 int numSlices;
 float area;
 
 cout << "Pizza diameter: "    ;
 cin >> pizzaDiameter;
 
area = (pizzaDiameter/2.0) * (pizzaDiameter/2.0) * 3.14159;
 
numSlices = area/14.125;
 
cout << numSlices << " slices ";

return 0;
}
