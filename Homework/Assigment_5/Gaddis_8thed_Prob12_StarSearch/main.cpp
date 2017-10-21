/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 18th, 2017, 8:55 PM
 * Purpose: Star search 
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries 
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Function prototype 
void getJudgeData(float &);
float calcScore(float, float, float, float, float);
int findHighest(float, float, float, float, float);
int findLowest(float, float, float, float, float);
float getsales (float &);
void findhighest (float, float, float, float);

//Program execution begins here!
int main(int argc, char** argv)
{
	float Score1, Score2, Score3, Score4, Score5;

	// Display introduction
	cout << "\nThis program calculates a performer’s final score.\n"
	     << "---------------------------------------------------\n\n";

	// Call function getJudgeData once for each judge
	getJudgeData(Score1);
	getJudgeData(Score2);
	getJudgeData(Score3);
	getJudgeData(Score4);
	getJudgeData(Score5);

	cout << "\nThe contestant’s score is ";

	// Call function calcScore passing to it the five scores 
	cout << calcScore(Score1, Score2, Score3, Score4, Score5);

	cout << endl;

	return 0;
}

/*
 *                              getJudgeData                                     
 *     This function will ask the user for a judge's score, store it in a        
 *     reference parameter variable, and validate it.                            
 */

void getJudgeData(float &Score)
{
	do
	{
		cout << "Enter a judge’s score: ";
	    cin  >> Score;

	    if (Score < 0 || Score > 10)
	    {
	    	cout << "\nError! Invalid score.\n"
	    		 << "Judge's score must be greater than 0 and less than 10.\n";
	    }

	} while (Score < 0 || Score > 10);
}

/*
 *                               calcScore                                      
 *  This function calculates and returns the average of the 3 scores that       
 *  remain after dropping the highest and lowest scores the performer received. 
 */

float calcScore(float Score1, float Score2, float Score3, float Score4,
	             float Score5)
{	
	int    High,
		    Low;
	float  Avg; 

	// Call function findHighest and findLowest passing 5 scores to them
	High = findHighest(Score1, Score2, Score3, Score4, Score5);	
	Low  = findLowest(Score1, Score2, Score3, Score4, Score5);

	if (High == static_cast<int>(Score1))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}
	else if (High == static_cast<int>(Score2))
	{
		if (Low == static_cast<int>(Score1))
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score1 + Score5)/3;
		else
			Avg = (Score1 + Score3 + Score4)/3;
	}
	else if (High == static_cast<int>(Score3))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score1))
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score1 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score1 + Score4)/3;
	}
	else if (High == static_cast<int>(Score4))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score1 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score1 + Score5)/3;
		else if (Low == static_cast<int>(Score1))
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score1)/3;
	}
	else
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score4 + Score1)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score4 + Score1)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score2 + Score1)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}

	return Avg;
}

/*
 *                             findHighest                                      
 *   This function finds and returns the Highest of the 5 scores passed to it   
 */

int findHighest(float Score1, float Score2, float Score3, float Score4,
			    float Score5)
{
	if (Score1 > Score2 && Score1 > Score3 && Score1 > Score4 && Score1 > Score5)
		return Score1;
	else if (Score2 > Score1 && Score2 > Score3 && Score2 > Score4 &&
			 Score2 > Score5)
		return Score2;
	else if (Score3 > Score2 && Score3 > Score1 && Score3 > Score4 &&
			 Score3 > Score5)
		return Score3;
	else if (Score4 > Score2 && Score4 > Score3 && Score4 > Score1 &&
			 Score4 > Score5)
		return Score4;
	else
		return Score5;
}

/*
 *                             findLowest                                      
 * This function finds and returns the lowest of the 5 scores passed to it   
 */


int findLowest(float Score1, float Score2, float Score3, float Score4,
			   float Score5)
{
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 &&
			 Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 &&
		     Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 &&
			 Score4 < Score5)
		return Score4;
	else
		return Score5;
}