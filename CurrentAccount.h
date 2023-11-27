#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "Account.h"

class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(int number, const std::string& holder, double initialBalance, double limit);
    void withdraw(double amount) override;
};

#endif // CURRENTACCOUNT_H