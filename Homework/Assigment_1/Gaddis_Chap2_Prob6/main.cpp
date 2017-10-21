/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on September 16, 2017, 2:35 PM
 * Purpose: Calculate annual pay
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int payAmnt = 1700; // Amount payed each pay Period
    int payPrd = 26; // Times payed per year
    int annualPay = payAmnt * payPrd; // Total Amount Payed
    
    cout << " $" << annualPay << " payed annually." << endl;

    return 0;
}

