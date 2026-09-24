#include <iostream>
using namespace std;

int main()
{
    int pin;
    int correctPin = 1234;
    int choice;
    int attempts = 0;
    double balance = 5000;
    double amount;

    cout << "ATM SIMULATOR" << endl;

    while (attempts < 3)
    {
        cout << "Enter your PIN: ";
        cin >> pin;

        if (pin == correctPin)
        {
            cout << "PIN Verified Successfully!" << endl;
            break;
        }
        else
        {
            attempts++;
            cout << "Incorrect PIN!" << endl;
            cout << "Attempts remaining: " << 3 - attempts << endl;
        }
    }
    if (attempts == 3)
    {
        cout << "Too many incorrect attempts!" << endl;
        cout << "Account locked. Please try again later." << endl;
        return 0;
    }
    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin != correctPin)
    {
        cout << "Incorrect PIN!" << endl;
        return 0;
    }

    cout << "PIN Verified Successfully!" << endl;

    while (true)
    {
        cout << "\nATM MENU" << endl;
        cout << "1. Balance Check" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Your Balance is: Rs. " << balance << endl;
            break;
        case 2:
            cout << "Enter amount to deposit: Rs. ";
            cin >> amount;

            balance = balance + amount;

            cout << "Amount Deposited Successfully!" << endl;
            cout << "New Balance: Rs. " << balance << endl;
            break;
        case 3:
            cout << "Enter amount to withdraw: Rs. ";
            cin >> amount;

            if (amount <= balance)
            {
                balance = balance - amount;

                cout << "Please collect your cash." << endl;
                cout << "Remaining Balance: Rs. " << balance << endl;
            }
            else
            {
                cout << "Insufficient Balance!" << endl;
            }
            break;
        case 4:
            cout << "Thank you for using ATM!" << endl;
            return 0;
        default:
            cout << "Invalid Choice!" << endl;
        }
    }
    return 0;
}