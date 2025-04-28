#include "Calculate.h"

// Calculates yearly interest without monthly deposits
double Calculate::AnnualInterestWithoutDeposit(double& initInvestAmount, double annualInterest) {
    double yearlyInterest = 0.0;
    double monthlyRate = annualInterest / 100.0 / 12.0;

    for (int month = 0; month < 12; ++month) {
        double monthlyInterest = initInvestAmount * monthlyRate;
        yearlyInterest += monthlyInterest;
        initInvestAmount += monthlyInterest;
    }

    return yearlyInterest;
}

// Calculates yearly interest with monthly deposits
double Calculate::AnnualInterestWithDeposit(double& initInvestAmount, double annualInterest, double monthlyDeposit) {
    double yearlyInterest = 0.0;
    double monthlyRate = annualInterest / 100.0 / 12.0;

    for (int month = 0; month < 12; ++month) {
        initInvestAmount += monthlyDeposit;
        double monthlyInterest = initInvestAmount * monthlyRate;
        yearlyInterest += monthlyInterest;
        initInvestAmount += monthlyInterest;
    }

    return yearlyInterest;
}


