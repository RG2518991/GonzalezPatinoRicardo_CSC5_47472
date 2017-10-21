/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on September 12, 2017, 6:17 PM
 * Purpose: Calculate Sales Tax on $52
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    float cost = 52;//Sale Cost
    float statx = 0.04 * cost;// State Tax
    float countytx = 0.02 * cost;// County Tax
    float totltx = statx + countytx;//Total tax Amount
    
    cout << "The total sales tax on a $" << cost << " purchase is $" <<
            totltx << endl;
    

    return 0;
}

