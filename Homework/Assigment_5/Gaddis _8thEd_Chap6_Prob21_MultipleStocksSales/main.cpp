/* 
 * File:   main.cpp
 * Author: Ricardo Gonzalez Patino
 * Created on October 15th, 2017, 10:00 AM
 * Purpose:Multiple Stocks Sales .
 */
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int &, float &, float &, float &, float &, int);
float stockProfitLoss(int, float, float, float, float);
float totalProfitLoss(int);

int main()
{
	int NumOfSales;
	float   Total;

	cout << "\nCaculate the total profit (or loss) from  sales of stock.\n";
	cout << "What is the number of stock sales? ";
	cin  >> NumOfSales;

	Total = totalProfitLoss(NumOfSales);

	cout << "Total profit or loss from sales of stock: $";
	cout << fixed << showpoint << setprecision(2);
	cout << Total << endl << endl;

	return 0;
}

/*
 *                            totalProfitLoss                                  *
 *     This function calculates the total profit or loss from the sale of      *    
 *     multiple stocks                                                         
 */
float totalProfitLoss(int NumOfSales)
{
	int    NumOfShares;
	
	float PurchPrice,
		   PurchComm,
		   SalePrice,
		   SaleComm,
		   ProfitLoss,
		   Total = 0;

	for (int Sale = 1; Sale <= NumOfSales; Sale++)
	{
		getData(NumOfShares, PurchPrice, PurchComm, SalePrice, SaleComm, Sale);

		ProfitLoss = stockProfitLoss(NumOfShares, PurchPrice, PurchComm,
									 SalePrice, SaleComm);
		Total += ProfitLoss;

		cout << endl;
	}

	return Total;
}

                    
// * This function asks the user for the number of stock sales, the number of    *
 //* shares, the purchase price per share, the purchase commission paid, the     *
 //* sale price per share, and the sale commission paid an stores the data in a  *
 //* reference parameter.                                                        *
 
void getData(int &NumOfShares, float &PurchPrice,
	         float &PurchComm, float &SalePrice, float &SaleComm, int Sale)
{
	cout << "\nPlease enter the follow data for stock sale #"
		 << Sale << ":\n";
	cout << "What is the number of shares? ";
	cin  >> NumOfShares;
	cout << "What is the purchase price per share? ";
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;
}

//
//                            stockProfitLoss                                  * 
 //* This function accepts as arguments the number of shares, the purchase price *
 //* per, share teh purchase commission paid, the sale price per share, and the  *
 //* sale commission paid. Calculates and returns teh profit (or loss) from the  *
 //* sale of stock.                                                              * 
 //
float stockProfitLoss(int NumOfShares, float PurchPrice, float PurchComm,
	                   float SalePrice, float SaleComm)
{
	return ((NumOfShares * SalePrice) - SaleComm) - ((NumOfShares * PurchPrice)
		    + PurchComm);
}

