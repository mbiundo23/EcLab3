#include "Account.h"

Account::Account(int number, const std::string& holder, double initialBalance)
    : accountNumber(number), accountHolder(holder), balance(initialBalance) {}

void Account::displayDetails() const {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Account Holder: " << accountHolder << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        std::cout << "Withdrawn: " << amount << std::endl;
    } else {
        std::cout << "Insufficient balance for withdrawal." << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Account& account) {
    os << "Account Number: " << account.accountNumber << std::endl;
    os << "Account Holder: " << account.accountHolder << std::endl;
    os << "Balance: " << account.balance << std::endl;
    return os;
}