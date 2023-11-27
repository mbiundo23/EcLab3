#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(int number, const std::string& holder, double initialBalance, double limit)
    : Account(number, holder, initialBalance), overdraftLimit(limit) {}

void CurrentAccount::withdraw(double amount) {
    if (balance + overdraftLimit >= amount) {
        balance -= amount;
        std::cout << "Withdrawn: " << amount << std::endl;
    } else {
        std::cout << "Withdrawal failed. Exceeds overdraft limit." << std::endl;
    }
}