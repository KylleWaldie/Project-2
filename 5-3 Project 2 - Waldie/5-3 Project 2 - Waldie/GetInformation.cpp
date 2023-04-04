#include "GetInformation.h"

//Sets and returns information for classes.
void GetInformation::SetOpeningAmmount(double openMoney){

    this->openingAmount = openingAmount;
}

double GetInformation::GetOpeningAmount() const {

    return openingAmount;
}

void GetInformation::SetInitialAmount(double initialMoney){

    this->initialAmount = initialAmount;
}

double GetInformation::GetInitialAmount() const{

    return initialAmount;
}

void GetInformation::SetInterestRate(double Rate){

    interestRate = Rate;
}

double GetInformation::GetInterestRate() const{

    return interestRate;
}

void GetInformation::SetMonthlyDeposit(double deposits){
    monthlyDeposit = deposits;
}

double GetInformation::GetMonthlyDeposit() const{

    return monthlyDeposit;
}

void GetInformation::SetNumYears(int numberOfYears){

    numYears = numberOfYears;
}

int GetInformation::GetNumYears() const {

    return numYears;
}

