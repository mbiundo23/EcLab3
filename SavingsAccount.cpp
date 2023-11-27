#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(int number, const std::string& holder, double initialBalance, double rate)
    : Account(number, holder, initialBalance), interestRate(rate) {}

void SavingsAccount::withdraw(double amount) {
    const double minBalance = 1000.0; // Minimum balance required
    if (balance - amount >= minBalance) {
        balance -= amount;
        std::cout << "Withdrawn: " << amount << std::endl;
    } else {
        std::cout << "Withdrawal failed. Minimum balance not maintained." << std::endl;
    }
}