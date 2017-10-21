/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on September 11, 2017, 6:33 PM
 * Purpose: Add tax, tip and cost to bill
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float totl = 44.50;//$44.50 total bill cost
    float tax = totl * 0.0675;// 6.75 percent total tax on bill
    float tip = (tax + totl) * 0.15;//15 percent total tip 
    float fulbll = totl + tax + tip; // Total bill plus charges
    
    cout << "Total meal cost $" << totl <<endl;
    cout << "Total tax amount $" << tax <<endl;
    cout << "Total tip amount $" << tip <<endl;
    cout << "Total bill cost $" << fulbll<<endl;

    return 0;
}

