#include "YearEndBalance.h"

// Constructor with default values
YearEndBalance::YearEndBalance()
    : initInvestAmount(0.0), monthlyDeposit(0.0), annualInterest(0.0), numYears(0) {
}

//Defined setters
void YearEndBalance::SetAmount(double initInvestAmount) {
    this->initInvestAmount = initInvestAmount;
}

void YearEndBalance::SetDeposit(double monthlyDeposit) {
    this->monthlyDeposit = monthlyDeposit;
}

void YearEndBalance::SetInterest(double annualInterest) {
    this->annualInterest = annualInterest;
}

void YearEndBalance::SetYears(int numYears) {
    this->numYears = numYears;
}

//Defined Getters
double YearEndBalance::GetAmount() const {
    return initInvestAmount;
}

double YearEndBalance::GetDeposit() const {
    return monthlyDeposit;
}

double YearEndBalance::GetInterest() const {
    return annualInterest;
}

int YearEndBalance::GetYears() const {
    return numYears;
}
