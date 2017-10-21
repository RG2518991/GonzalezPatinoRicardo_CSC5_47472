/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on September 14, 2017, 3:57 PM
 * Purpose: Calculate total amount of Sales in year
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    float prcnt = .62;//%62 Percent of total sales
    float amnt = 4.2;//4.2 million Total amount of sales this year
    float dvison = prcnt * amnt; //Total percent this year
    //%62 of Total Amount of Sales
    cout << "East Coast devision total sales $" << dvison <<" million "<< endl;
    

    return 0;
}

