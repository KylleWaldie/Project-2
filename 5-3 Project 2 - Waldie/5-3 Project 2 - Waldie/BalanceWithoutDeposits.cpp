#include "BalanceWithoutDeposits.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Function to return yearly amount without monthly deposits.
double BalanceWithoutDeposits::CalculateBalaceWithoutMonthlyDeposite(double initialAmount, double interestRate, int numYears) {

    double monthlyDeposit = 0;
    double originalAmount = 0;

    int i = 0;
    double openingAmount = initialAmount + originalAmount;
    
    //Loops through to calculate Yearly Return.
    for (i = 1; i < numYears + 1; i++) {

        double interest = (openingAmount + monthlyDeposit) * (interestRate / 100);
        
        openingAmount = openingAmount + interest;
        cout << fixed << setprecision(2) << "  " << i << "           $" << openingAmount << "                $" << interest << endl << endl;

    }
    cout << endl;

    return 0.0;
}
