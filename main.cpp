#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.00;
    double amount;

    cout << "===== ATM AND BANKING SYSTEM =====\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Your balance is: $" << balance << endl;
            break;

        case 2:
            cout << "Enter deposit amount: $";
            cin >> amount;

            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful.\n";
                cout << "New balance: $" << balance << endl;
            } else {
                cout << "Invalid amount.\n";
            }
            break;

        case 3:
            cout << "Enter withdrawal amount: $";
            cin >> amount;

            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful.\n";
                cout << "Remaining balance: $" << balance << endl;
            } else {
                cout << "Invalid amount or insufficient balance.\n";
            }
            break;

        case 4:
            cout << "Thank you for using the ATM.\n";
            break;

        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
