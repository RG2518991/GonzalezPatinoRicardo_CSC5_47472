/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on September 10, 2017, 2:20 PM
 * Purpose: Calculate average of sum
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int val1 = 28, val2 = 32, val3 = 37, val4 = 24, val5 = 33; //Variables
    int sum = val1 + val2 + val3 + val4 + val5; // Sum of all variables
    float averg = sum/5; //Average of Variables
    
    cout << "The average is = " << averg << endl;

    return 0;
}

