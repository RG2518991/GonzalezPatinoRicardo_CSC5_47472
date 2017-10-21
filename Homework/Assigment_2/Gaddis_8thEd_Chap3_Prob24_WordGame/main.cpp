/* 
   File:   main
   Author: Ricardo Gonzalez Patino
   Created on September 25th, 11:45 PM
   Purpose: Story 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here!
 
using namespace std;
 
int main(int argc, char** argv) 
{
    string Name, City, College, Profession, Animal, PetName;
 float Age;

 cout << "Enter your name: ";
 getline(cin, Name);
 cout << "Enter your age: ";
 cin >> Age;
 cin.ignore();
 cout << "Enter the name of a city: ";
 getline(cin, City);
 cout << "Enter the name of a college: ";
 getline(cin, College);
 cout << "Enter a profession: ";
 getline(cin, Profession);
 cout << "Enter a type of an animal: ";
 getline(cin, Animal);
 cout << "Enter a pet's name: ";
 getline(cin, PetName);

 cout << "\n\n______________________________\n"
  << "           Word Game"
  << "\n__________________________________\n\n";

 cout << "There once was a person named " << Name << " who lived in " << City
  << ". At the age of \n" << Age << ", " << Name << " went to " 
  << College << ".  " << Name << " graduated and went to work \n"
  << "as a " << Profession << ".  Then, " << Name << " adopted a(n) "
  << Animal << " named " << PetName << ".  They, \nboth lived happily "
  << "ever after! \n\n";

 system("pause");
    
    return 0;
}
