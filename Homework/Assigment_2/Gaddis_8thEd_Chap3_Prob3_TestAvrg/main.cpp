/* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on September 21th, 07:45 AM
   Purpose: Test Average. This program will calculate the average 
 * test scores of of 5 and display the percentage of the test score. 
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
    float score,avg=0, lowest=100;
    int i=0;
    while(i<5)
    {
        cout << "Please enter test score (Please enter value between 1 and 100): ";
        cin>>score;
        if (score>0 && score<100)
        {
           avg=avg+score;
           if (score<lowest)
           lowest=score;
           i++;
        }
        else
        {
            cout<<"ERROR: Please enter Test score values 0 to 100!"<<endl;
        }
    }
    avg=avg-lowest;
    avg=avg/4.0;  
    cout << setw(4);
    cout << fixed << showpoint << setprecision(2);
    cout<<"Average is"<<avg<<endl;
 
    return 0;
}
