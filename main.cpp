#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CurrentAccount.h"

int main() {
    SavingsAccount savings(1, "John Doe", 1000, 0.02);
    CurrentAccount current(2, "Jane Doe", 2000, 500);

    savings.displayDetails();
    current.displayDetails();

    savings.deposit(500);
    current.withdraw(1000);
    
    savings.displayDetails();
    current.displayDetails();

    // Transfer 300 from savings to current
    current + savings, 300;

    std::cout << "After transfer:" << std::endl;
    savings.displayDetails();
    current.displayDetails();

    return 0;
}
