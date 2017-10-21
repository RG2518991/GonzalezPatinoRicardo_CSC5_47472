/* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on September 24th, 10:45 AM
   Purpose: Stock Transaction Program 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here!
 
using namespace std;
 
int main(int argc, char** argv) 
{


 float sharesBought, stockPrice1, commission1, sharesSold, stockPrice2, commission2;
 float total1, total2;

 cout << "\n------------------------------------------\n"
  << "     Stock Transaction Program\n"
  << "\n------------------------------------------\n";

 sharesBought = 1000;
 sharesSold = 1000;
 stockPrice1 = 32.87;
 stockPrice2 = 33.92;
 commission1 = (sharesBought * stockPrice1) * 0.02;
 commission2 = (sharesSold * stockPrice2) * 0.02;
 total1 = (sharesBought * stockPrice1) + commission1;
 total2 = (sharesSold * stockPrice2) + commission2;

 cout << setprecision(2) << fixed;
 cout << "Amount paid for the stock: $" << sharesBought * stockPrice1 << endl;
 cout << "Commission paid to broker : $" << commission1;
 cout << "\n-----------------------------\n";
 cout << "The stock sold for: $" << sharesSold * stockPrice2 << endl;
 cout << "Commission paid to broker : $" << commission2 << endl;
 cout << "Profit: " << total2 - total1 << "\n\n";

 system("pause");

 return 0;
}
