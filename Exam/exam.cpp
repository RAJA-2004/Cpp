#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string name;
    string countryName;
    int accNo;
    int balance;

public:
    Bank() {
        balance = 0;
    }

    void insert() {
        cout << "Enter name: ";
        cin.ignore(); // Clear newline character from previous input
        getline(cin, name);
        cout << "Enter country Name: ";
        getline(cin, countryName);
        cout << "Enter account number: ";
        cin >> accNo;
    }

    void deposit() {
        cout << "Enter amount to deposit: ";
        int amount;
        cin >> amount;
        balance += amount;
        cout << amount << " deposited." << endl;
    }

    void withdrawal() {
        cout << "Enter amount to withdraw: ";
        int amount;
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << amount << " withdrawn." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    int checkBalance() {
        return balance;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNo << endl;
        cout << "Country Name: " << countryName << endl;
        cout << "Balance: " << checkBalance() << endl;
    }
};

int main() {
    Bank b1;
    int choice;

    while (true) {
        cout << "Menu" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdrawal" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                b1.insert();
                break;
            case 2:
                b1.deposit();
                break;
            case 3:
                b1.withdrawal();
                break;
            case 4:
                cout << "Balance: " << b1.checkBalance() << endl;
                break;
            case 5:
                b1.display();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
