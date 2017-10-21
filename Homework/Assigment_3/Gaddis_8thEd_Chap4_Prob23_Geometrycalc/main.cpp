/* 
   File:   main
   Author: Ricardo Gonzalez Patino 
   Created on October 07, 2017, 5:08 PM
   Purpose: Geometry Calculator 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
 

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
        const float PI = 3.14159;
 
    int    choice;         // User's shape choice
    float  radius,         // Circle radius
           length,         // Rectangle length
           width,          // Rectangle width
           base,           // Triangle base
           height,         // Triangle height
           area;           // Area of the selected shape
 
	// Display selections and request user input
	cout << "Geometry Calculator\n\n";
	cout << "1. Calculate the area of a Circle\n";
	cout << "2. Calculate the area of a Rectangle\n";
	cout << "3. Calculate the area of a Triangle\n";
	cout << "4. Quit\n\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;
 
	// Calculate and display the area of the selected shape
	switch (choice)
	{
		case 1:  // Area of a circle
			     cout << "\nEnter the circle's radius: ";
				 cin  >> radius;
 
				 if (radius < 0)
					 cout << "\nThe radius can not be less than zero.\n";
				 else
				 {	 area = PI * radius * radius;
				     cout << "\nThe area is " << area << endl;
					 break;
				 }
 
		case 2:  // Area of a rectangle
			     cout << "\nEnter the rectangle's length: ";
				 cin  >> length;
				 cout << "Enter the rectangle's width: ";
				 cin  >> width;
 
				 if (length < 0 || width < 0)
					 cout << "\nOnly enter positive values for length and width.\n";
				 else
				 {	 area = length * width;
					 cout << "\nThe area is " << area << endl;
				 }
				 break;
 
		case 3:  // Area of a triangle
			     cout << "Enter the length of the base: ";
				 cin  >> base;
				 cout << "Enter the triangle's height: "; 
				 cin  >> height;
 
				 if (base < 0 || height < 0)
					 cout << "\nOnly enter positive values for base and height.\n";
				 else
				 {	 area = base * height * 0.5;
					 cout << "\nThe area is " << area << endl;
				 }
				 break;
 
		case 4:	 cout << "\nBye!\n";
			     break;
 
		default:  cout << "\nYou may only enter 1, 2, 3, or 4.\n";
	}
	return 0;
}
   