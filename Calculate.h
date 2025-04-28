#ifndef CALCULATE_H
#define CALCULATE_H

// Class to calculate interest values
class Calculate {
public:
    double AnnualInterestWithoutDeposit(double& initInvestAmount, double annualInterest);
    double AnnualInterestWithDeposit(double& initInvestAmount, double annualInterest, double monthlyDeposit);
};

#endif
