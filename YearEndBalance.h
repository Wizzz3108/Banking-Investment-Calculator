#ifndef YEARENDBALANCE_H
#define YEARENDBALANCE_H

using namespace std;

// Class to hold and manage user input values
class YearEndBalance {
private:
    double initInvestAmount;
    double monthlyDeposit;
    double annualInterest;
    int numYears;

public:
    // Constructor
    YearEndBalance();
    
    //setters
    void SetAmount(double initInvestAmount);
    void SetDeposit(double monthlyDeposit);
    void SetInterest(double annualInterest);
    void SetYears(int numYears);

    //getters
    double GetAmount() const;
    double GetDeposit() const;
    double GetInterest() const;
    int GetYears() const;
};

#endif

