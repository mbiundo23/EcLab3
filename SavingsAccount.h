#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int number, const std::string& holder, double initialBalance, double rate);
    void withdraw(double amount) override;
};

#endif // SAVINGSACCOUNT_H