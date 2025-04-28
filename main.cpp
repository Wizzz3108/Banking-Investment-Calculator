#include <iostream>
#include "YearEndBalance.h"
#include "Display.h"

using namespace std;

int main() {
    YearEndBalance account;            // Declare an instance of YearEndBalance class

    // Variables to store user input
    double initInvestAmount, monthlyDeposit, annualInterest;
    int numYears;

    cout << "***********************************" << endl;
    cout << "********* Data Input **************" << endl;

    // Input prompts
    cout << "Initial Investment Amount: ";
    cin >> initInvestAmount;
    account.SetAmount(initInvestAmount);   // Set initial investment amount

    cout << "Monthly Deposit: ";
    cin >> monthlyDeposit;
    account.SetDeposit(monthlyDeposit);    // Set monthly deposit

    cout << "Annual Interest: ";
    cin >> annualInterest;
    account.SetInterest(annualInterest);   // Set interest rate

    cout << "Number of Years: ";
    cin >> numYears;
    account.SetYears(numYears);           // Set number of years

    // Pause
    cout << "\nPress Enter to continue...";
    cin.ignore();        // Clear previous newline
    cin.get();           // Wait for Enter

    // Display reports
    Display display;
    display.ReportWithoutMonthlyDeposits(account);
    display.ReportWithMonthlyDeposits(account);

    return 0;
}
