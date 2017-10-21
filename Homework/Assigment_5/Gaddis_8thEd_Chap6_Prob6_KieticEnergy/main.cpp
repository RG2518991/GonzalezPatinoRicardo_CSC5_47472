/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 16th, 2017, 11:50 PM
 * Purpose:Falling Distance
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const float GRAVITY = 9.8;

// Function prototypes
float fallingDistance(int);

int main()
{
 	cout << "\nTable of the distances an object falls due\n"
 		 << "to gravity in specific time periods.\n\n"
 		 << "    Time        Distance\n"
 	     << "(in seconds)   (in meters)\n"
 	     << "---------------------------\n";

 	for(int T = 1; T <= 10; T++)
 	{
 		cout << "    " << setw(3) << T << "           "
 			 << fixed << setprecision(0) << setw(4) 
 			 << fallingDistance(T) << endl;
 	}
 	cout << endl;
 	return 0;
}
/*
 *                          fallingDistance                                   
 * This function accepts an object’s falling time (in seconds) as an argument 
 * and returns  the distance in meters that the object has fallen during that 
 * time interval.                                                             
 */
float fallingDistance(int T)
{
	return .5 * GRAVITY * pow(T, 2);
}