#ifndef DISPLAY_H
#define DISPLAY_H

#include "YearEndBalance.h"

// Class to handle display output
class Display {
public:
    void ReportWithoutMonthlyDeposits(const YearEndBalance& userInput);
    void ReportWithMonthlyDeposits(const YearEndBalance& userInput);
};

#endif

