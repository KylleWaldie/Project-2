#pragma once
class GetInformation {
	public:
		void SetOpeningAmmount(double openMoney);
		double GetOpeningAmount() const;
		void SetInitialAmount(double initailMoney);
		double GetInitialAmount() const;
		void SetInterestRate(double Rate);
		double GetInterestRate() const;
		void SetMonthlyDeposit(double deposits);
		double GetMonthlyDeposit() const;
		void SetNumYears(int numberOfYears);
		int GetNumYears() const;
		double openingAmount;
		double initialAmount;
		double interestRate;
		double monthlyDeposit;
		int numYears;

};

