#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account {
protected:
    int accountNumber;
    std::string accountHolder;
    double balance;

public:
    Account(int number, const std::string& holder, double initialBalance);
    void displayDetails() const;
    void deposit(double amount);
    virtual void withdraw(double amount);
    friend std::ostream& operator<<(std::ostream& os, const Account& account);
    virtual ~Account() = default;
};

#endif // ACCOUNT_H