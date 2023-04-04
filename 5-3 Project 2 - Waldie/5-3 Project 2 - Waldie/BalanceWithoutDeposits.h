#pragma once
#include "GetInformation.h"

class BalanceWithoutDeposits{

	public:
		double CalculateBalaceWithoutMonthlyDeposite(double initialAmount, double interestRate, int numYears);

	private:
		double yearEndBalance;
};

