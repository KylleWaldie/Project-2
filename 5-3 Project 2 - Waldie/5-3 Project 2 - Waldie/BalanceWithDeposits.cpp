#include "BalanceWithDeposits.h"
#include<iostream>
#include<iomanip>

using namespace std;

//Function to calculate return with monthly deposits.
double BalanceWithDeposits::CalculateBalaceWithMonthlyDeposite(double initialAmount, double interestRate, int numYears, double monthlyDeposit) {

    double originalAmount = 0.0;
    int i;
    double openingAmount = initialAmount + originalAmount;

    //Loops through to calculate yearly return
    for (i = 1; i < numYears + 1; i++) {

        double interest = (openingAmount + (monthlyDeposit * 12)) * (interestRate / 100);
        
        openingAmount = openingAmount + interest;
        cout << fixed << setprecision(2) << "  " << i << "           $" << openingAmount << "                $" << interest << endl << endl;
    }
    cout << endl;

    return 0.0;
}
