


#include <iostream>
using namespace std;

int main() {
    int correctPin = 1234;
    int enteredPin;
    int balance = 20000;
    int amount;

    cout << "Enter your PIN: ";
    cin >> enteredPin;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (enteredPin == correctPin) {
        if (amount > 0) {
            if (amount <= balance) {
                if (amount % 500 == 0) {
                    balance = balance - amount;

                    cout << "Withdrawal successful" << endl;
                    cout << "Amount withdrawn: Rs. " << amount << endl;
                    cout << "Remaining balance: Rs. " << balance << endl;
                }
                else {
                    cout << "Amount must be a multiple of 500" << endl;
                }
            }
            else {
                cout << "Insufficient balance" << endl;
            }
        }
        else {
            cout << "Invalid amount" << endl;
        }
    }
    else {
        cout << "Incorrect PIN" << endl;
    }

    return 0;
}
