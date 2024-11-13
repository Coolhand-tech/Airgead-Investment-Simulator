#ifndef INVESTMENT_H
#define INVESTMENT_H

class Investment {
private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int numYears;

public:
    // Constructor
    Investment(double initialInv, double monthlyDep, double interestRate, int years);

    // Getters
    double getInitialInvestment() const;
    double getMonthlyDeposit() const;
    double getAnnualInterest() const;
    int getNumYears() const;

    // Report Functions
    void calculateWithoutMonthlyDeposits() const;
    void calculateWithMonthlyDeposits() const;
};

#endif
