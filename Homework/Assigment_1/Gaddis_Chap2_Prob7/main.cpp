/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on September 13, 2017, 2:47 PM
 * Purpose:calculate oceans level in 10 year
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
     float currentLevel = 0.00;  //assume the current level is 0
 float risingLevel = 1.5;  //15 millimiters per year

 cout << "In 5 years, the ocean's level will be " << risingLevel * 5 << " mm higher "
  << "than the current level \n";
 cout << "In 7 years, the ocean's level will be " << risingLevel * 7 << " mm higher "
  << "than the current level \n";
 cout << "In 10 years, the ocean's level will be " << risingLevel * 10 << " mm higher "
  << "than the current level \n\n";
}

