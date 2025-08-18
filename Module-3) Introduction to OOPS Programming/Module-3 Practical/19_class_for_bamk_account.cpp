//2. Class for Bank Account 
// o Create a class BankAccount with data members like balance and member functions like deposit and withdraw. Implement encapsulation by keeping the data members private. 
// o Objective: Understand encapsulation in classes. 
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Private data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Invalid initial balance. Setting balance to 0.\n";
        }
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }

    // Function to check balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000); // Create account with initial balance

    account.deposit(500);
    account.withdraw(300);

    cout << "Current Balance: " << account.getBalance() << endl;

    account.withdraw(1500); // Attempt to withdraw more than balance

    return 0;
}
