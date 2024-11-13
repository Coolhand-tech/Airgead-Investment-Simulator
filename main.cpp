/*
Ali Jackson
CS 210
October 1st
*/

#include <iostream>
#include "Investment.h"

int main() {
    double initialInvestment, monthlyDeposit, annualInterest;
    int numYears;
    
    // Display Welcome Message
    std::cout << "Welcome to Airgead Banking Investment Calculator!\n\n";

    // Get user input
    std::cout << "Enter the Initial Investment Amount: $";
    std::cin >> initialInvestment;
    
    std::cout << "Enter the Monthly Deposit: $";
    std::cin >> monthlyDeposit;
    
    std::cout << "Enter the Annual Interest Rate (as a percentage): ";
    std::cin >> annualInterest;
    
    std::cout << "Enter the Number of Years: ";
    std::cin >> numYears;

    // Confirm input
    std::cout << "\nInitial Investment Amount: $" << initialInvestment << "\n";
    std::cout << "Monthly Deposit: $" << monthlyDeposit << "\n";
    std::cout << "Annual Interest Rate: " << annualInterest << "%\n";
    std::cout << "Number of Years: " << numYears << "\n";
    std::cout << "\nPress any key to continue...\n";
    std::cin.get(); // Wait for user to press a key
    std::cin.ignore();

    // Create Investment object
    Investment investment(initialInvestment, monthlyDeposit, annualInterest, numYears);

    // Generate reports
    investment.calculateWithoutMonthlyDeposits();
    investment.calculateWithMonthlyDeposits();

    return 0;
}
