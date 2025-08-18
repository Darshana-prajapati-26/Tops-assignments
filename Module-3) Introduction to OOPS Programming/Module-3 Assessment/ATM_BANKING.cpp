#include <iostream>   // For input/output
#include <ctime>      // For date and time
#include <string>     // For string handling
using namespace std;

// ATM Class
class ATM {
private:
    string bankName;
    int pin;                // ATM PIN
    double initialBalance;  // Initial Bank Balance
    double currentBalance;  // Current Account Balance

public:
    // Constructor to initialize ATM details
    ATM(string bName, int p, double initBal, double currBal)
        : bankName(bName), pin(p), initialBalance(initBal), currentBalance(currBal) {}

    // Function to display welcome screen
    void displayWelcome();

    // Function to validate PIN (Only ONE attempt)
    bool validatePIN();

    // Function to display main menu
    void displayMenu();

    // Deposit money into account
    void deposit();

    // Withdraw money from account
    void withdraw();

    // Check account balance
    void checkBalance();

    // Display help information
    void helpScreen();
};

// Scope resolution operator used for defining functions outside the class

// Display welcome screen with date and time
void ATM::displayWelcome() {
    time_t now = time(0);              // Current time
    char* dt = ctime(&now);            // Convert to readable format

    cout << "=====================================\n";
    cout << "    Welcome to " << bankName << " ATM\n";
    cout << "    Current Date & Time: " << dt;
    cout << "=====================================\n";
    cout << "1. Enter ATM PIN\n";
    cout << "2. Help\n";
    cout << "3. Exit\n";
    cout << "=====================================\n";
}

// Validate the PIN entered by the user
bool ATM::validatePIN() {
    int enteredPin;
    cout << "Enter your ATM PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin) {
        return true; // Correct PIN
    } else {
        cout << "Incorrect PIN! Exiting...\n";
        return false; // Incorrect PIN
    }
}

// Display the ATM main menu
void ATM::displayMenu() {
    cout << "\n========= MAIN MENU =========\n";
    cout << "1. Deposit Money\n";
    cout << "2. Withdraw Money\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit\n";
    cout << "=============================\n";
}

// Deposit function
void ATM::deposit() {
    double amount;
    cout << "Enter amount to deposit: Rs. ";
    cin >> amount;
    currentBalance += amount;
    cout << "Amount Deposited Successfully!\n";
    cout << "Initial Balance: Rs. " << initialBalance << endl;
    cout << "Current Balance: Rs. " << currentBalance << endl;
}

// Withdraw function
void ATM::withdraw() {
    double amount;
    cout << "Enter amount to withdraw: Rs. ";
    cin >> amount;

    if (amount > currentBalance) {
        cout << "Insufficient Balance! Withdrawal Failed.\n";
    } else {
        currentBalance -= amount;
        cout << "Withdrawal Successful!\n";
        cout << "Remaining Balance: Rs. " << currentBalance << endl;
    }
}

// Check balance
void ATM::checkBalance() {
    cout << "Your Current Balance is: Rs. " << currentBalance << endl;
}

// Help screen
void ATM::helpScreen() {
    cout << "\n========== HELP ==========\n";
    cout << "1. Insert your card into the ATM machine.\n";
    cout << "2. Enter your ATM PIN (default: 12345).\n";
    cout << "3. Choose from Deposit, Withdraw, or Check Balance.\n";
    cout << "4. Contact bank for more assistance.\n";
    cout << "==========================\n";
}

// Main Function
int main() {
    // Create ATM object with bank name, PIN, initial balance, and current balance
    ATM myATM("SBI Bank", 12345, 60000, 20000);

    int choice;

    // Display welcome screen
    myATM.displayWelcome();
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Validate PIN (only one attempt)
        if (myATM.validatePIN()) {
            do {
                myATM.displayMenu();
                cout << "Enter choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        myATM.deposit();
                        break;
                    case 2:
                        myATM.withdraw();
                        break;
                    case 3:
                        myATM.checkBalance();
                        break;
                    case 4:
                        cout << "Thank you for using our ATM!\n";
                        break;
                    default:
                        cout << "Invalid choice! Try again.\n";
                }
            } while (choice != 4);
        }
    }
    else if (choice == 2) {
        myATM.helpScreen();
    }
    else {
        cout << "Exiting the ATM. Goodbye!\n";
    }

    return 0;
}
