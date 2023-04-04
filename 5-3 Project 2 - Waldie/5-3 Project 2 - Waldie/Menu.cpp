#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::printMenu() {
    int i = 0;

    for (i = 0; i < 34; i++) {
        cout << '*';
    }
    cout << endl << "*********** Data Input ***********" << endl;
    cout << "Initial Investment Ammount: " << endl;
    cout << "Monthly Deposit: " << endl;
    cout << "Annual Interest: " << endl;
    cout << "Number of Years: " << endl;
    cout << "Pres any key to continue..." << endl;

}

void Menu::printBalanceWithoutDeposits() {
    int i = 0;

    cout << "    Balance and Interest Without Additional Monthly Deposits    " << endl;
    
    for (i = 0; i < 64; i++) {
        cout << '=';
    }
    cout << endl << "  Year        Year End Balance     Year End Earned Interest     " << endl;
    
    for (i = 0; i < 64; i++) {
        cout << '-';
    }
    cout << endl;

}

void Menu::printBalanceWithDeposits() {
    int i = 0;

    cout << "      Balance and Interest With Additional Monthly Deposits    " << endl;

    for (i = 0; i < 64; i++) {
        cout << '=';
    }
    cout << endl << "  Year        Year End Balance     Year End Earned Interest     " << endl;

    for (i = 0; i < 64; i++) {
        cout << '-';
    }
    cout << endl;

}

