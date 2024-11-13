/*
Ali Jackson
CS 210
October 1st
*/

#include <iostream>
#include <iomanip>
#include "Investment.h"

// Constructor
Investment::Investment(double initialInv, double monthlyDep, double interestRate, int years)
    : initialInvestment(initialInv), monthlyDeposit(monthlyDep), annualInterest(interestRate), numYears(years) {}

// Getters
double Investment::getInitialInvestment() const { return initialInvestment; }
double Investment::getMonthlyDeposit() const { return monthlyDeposit; }
double Investment::getAnnualInterest() const { return annualInterest; }
int Investment::getNumYears() const { return numYears; }

// Function to calculate report without monthly deposits
void Investment::calculateWithoutMonthlyDeposits() const {
    double balance = initialInvestment;
    double interest;
    
    std::cout << "\nYear-End Balances Without Additional Monthly Deposits:\n";
    std::cout << "Year   Year-End Balance   Year-End Earned Interest\n";
    std::cout << "---------------------------------------------------\n";
    
    for (int year = 1; year <= numYears; ++year) {
        interest = balance * (annualInterest / 100);
        balance += interest;
        
        std::cout << std::setw(4) << year << std::setw(18) << std::fixed << std::setprecision(2) << balance
                  << std::setw(26) << interest << "\n";
    }
}

// Function to calculate report with monthly deposits
void Investment::calculateWithMonthlyDeposits() const {
    double balance = initialInvestment;
    double interest;
    
    std::cout << "\nYear-End Balances With Additional Monthly Deposits:\n";
    std::cout << "Year   Year-End Balance   Year-End Earned Interest\n";
    std::cout << "---------------------------------------------------\n";
    
    for (int year = 1; year <= numYears; ++year) {
        double yearInterest = 0.0;
        for (int month = 1; month <= 12; ++month) {
            interest = (balance + monthlyDeposit) * ((annualInterest / 100) / 12);
            yearInterest += interest;
            balance += monthlyDeposit + interest;
        }
        
        std::cout << std::setw(4) << year << std::setw(18) << std::fixed << std::setprecision(2) << balance
                  << std::setw(26) << yearInterest << "\n";
    }
}
