#include <iostream>
#include <iomanip>
#include "YearEndBalance.h"
#include "Calculate.h"
#include "Display.h"

using namespace std;

// Prints report without monthly deposits
void Display::ReportWithoutMonthlyDeposits(const YearEndBalance& userInput) {
    double balance = userInput.GetAmount();     // Starting balance
    Calculate calc;    // Instance of Calculate

    cout << "\n  Balance and Interest Without Additional Monthly Deposits" << endl;
    cout << "==========================================================" << endl;
    cout << left << setw(10) << "Year" << setw(20) << "Year End Balance" << "Year End Earned Interest" << endl;
    cout << "----------------------------------------------------------" << endl;

    // Loop through each year
    for (int year = 1; year <= userInput.GetYears(); ++year) {
        double interest = calc.AnnualInterestWithoutDeposit(balance, userInput.GetInterest());
        cout << setw(10) << year << "$" << setw(19) << fixed << setprecision(2) << balance
            << "$" << fixed << setprecision(2) << interest << endl;
    }
}

// Prints report with monthly deposits
void Display::ReportWithMonthlyDeposits(const YearEndBalance& userInput) {
    double balance = userInput.GetAmount();   // Starting balance
    Calculate calc; // Instance of Calculate

    cout << "\n  Balance and Interest With Additional Monthly Deposits" << endl;
    cout << "=======================================================" << endl;
    cout << left << setw(10) << "Year" << setw(20) << "Year End Balance" << "Year End Earned Interest" << endl;
    cout << "-------------------------------------------------------" << endl;

    // Loop through each year
    for (int year = 1; year <= userInput.GetYears(); ++year) {
        double interest = calc.AnnualInterestWithDeposit(balance, userInput.GetInterest(), userInput.GetDeposit());
        cout << setw(10) << year << "$" << setw(19) << fixed << setprecision(2) << balance
            << "$" << fixed << setprecision(2) << interest << endl;
    }
}


