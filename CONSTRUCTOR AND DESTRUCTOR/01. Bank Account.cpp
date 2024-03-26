#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& name, double initialBalance) 
        : accountHolderName(name), balance(initialBalance) {
        std::cout << "Account for " << accountHolderName << " created with balance $" << balance << std::endl;
    }

    ~BankAccount() {
        std::cout << "Account for " << accountHolderName << " destroyed." << std::endl;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "$" << amount << " deposited. New balance is $" << balance << std::endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "$" << amount << " withdrawn. New balance is $" << balance << std::endl;
        } else {
            std::cout << "Insufficient funds!" << std::endl;
        }
    }

    void display() const {
        std::cout << "Account Holder: " << accountHolderName << ", Balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount myAccount("John Doe", 1000);

    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.display();

    return 0;
}
