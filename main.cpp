#include <iostream>
using namespace std;

int main() {
    cout << "----------------------THE BANK----------------------" << endl;

    double balance = 0.0;  // Store user's balance
    int option;

    while (true) {
        cout << "\n1. Open bank account" << endl;
        cout << "2. Close bank account" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Balance" << endl;
        cout << "98. Security Actions" << endl;
        cout << "99. Exit" << endl;

        cout << "\n[Option]:> ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "\nBank account opened successfully." << endl;
            break;

        case 2:
            cout << "\nBank account closed." << endl;
            return 0;

        case 3:
            {
                double depositAmount;
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                balance += depositAmount;
                cout << "\nDeposited: $" << depositAmount << endl;
            }
            break;

        case 4:
            {
                double withdrawAmount;
                cout << "Enter withdrawal amount: ";
                cin >> withdrawAmount;
                if (withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    cout << "\nWithdrawn: $" << withdrawAmount << endl;
                } else {
                    cout << "I\nnsufficient funds." << endl;
                }
            }
            break;

        case 5:
            cout << "\nCurrent Balance: $" << balance << endl;
            break;

        case 98:
            cout << "\nSecurity Actions are not implemented yet." << endl;
            break;

        case 99:
            cout << "\nExiting the bank system. Goodbye!" << endl;
            return 0;

        default:
            cout << "\nInvalid option. Please try again." << endl;
            break;
        }

        // Wait for user to press enter to continue
        cout << "\nPress Enter to continue...";
        cin.ignore();  // Ignore the newline left in the input buffer
        cin.get();     // Wait for user to press Enter
    }

    return 0;
}
