// Kylle Waldie
//4/2/23
//5-2 Project 2


#include <iostream>
#include <string>
#include "Menu.h"
#include "BalanceWithDeposits.h"
#include "BalanceWithoutDeposits.h"
#include "GetInformation.h"

using namespace std;


int main() {
    int numYears;
    double initialInvestment, interestRate, monthlyDeposit;

    //initializes classes.
    Menu mn;
    BalanceWithoutDeposits noDeposit;
    GetInformation gi;
    BalanceWithDeposits withDeposits;
    
    //Prints the Menu.
    mn.printMenu();

    //Outputs to the console to get user input. 
    cout << endl << "What is the initial investment: ";
    cin >> initialInvestment;
    gi.SetInitialAmount(initialInvestment);
    cout << endl << "What is the monthly deposit: ";
    cin >> monthlyDeposit;
    gi.SetMonthlyDeposit(monthlyDeposit);
    cout << endl << "What is the annual interest: ";
    cin >> interestRate;
    gi.SetInterestRate(interestRate);
    cout << endl << "How many years: ";
    cin >> numYears;
    gi.SetNumYears(numYears);

    //Prints top part of output. And then loops through to find the Yearly return without monthly investment.
    mn.printBalanceWithoutDeposits();
    noDeposit.CalculateBalaceWithoutMonthlyDeposite(initialInvestment, interestRate, numYears);

    //Prints top part of output and then loops through to find the Yearly Return with monthly investments.
    mn.printBalanceWithDeposits();
    withDeposits.CalculateBalaceWithMonthlyDeposite(initialInvestment, interestRate, numYears, monthlyDeposit);

}


