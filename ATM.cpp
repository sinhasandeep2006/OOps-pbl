#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
using namespace std;

class User {
public:
    int accountNumber;
    string pin;
    double balance;

    User() {}
    User(int accNum, string p, double bal) : accountNumber(accNum), pin(p), balance(bal) {}

    void displayBalance() {
        cout << "Current Balance: ₹" << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited ₹" << amount << ". New Balance: ₹" << balance << endl;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
            return false;
        } else {
            balance -= amount;
            cout << "Withdrawn ₹" << amount << ". New Balance:₹" << balance << endl;
            return true;
        }
    }

    void changePIN(string newPIN) {
        pin = newPIN;
        cout << "PIN successfully changed." << endl;
    }
};

class ATMSystem {
private:
    unordered_map<int, User> users;  // Users stored by account number
    vector<string> adminKeys = {"sandeep", "admin01", "404"};
    fstream userFile;

    void saveUsersToFile() {
        userFile.open("users.txt", ios::out);
        for (auto &pair : users) {
            userFile << pair.second.accountNumber << " " << pair.second.pin << " " << pair.second.balance << endl;
        }
        userFile.close();
    }

    void loadUsersFromFile() {
        userFile.open("users.txt", ios::in);
        if (userFile.is_open()) {
            int accNum;
            string pin;
            double bal;
            while (userFile >> accNum >> pin >> bal) {
                users[accNum] = User(accNum, pin, bal);
            }
        }
        userFile.close();
    }

public:
    ATMSystem() {
        loadUsersFromFile();
    }

    ~ATMSystem() {
        saveUsersToFile();
    }

    bool adminLogin(string key) {
        for (string &adminKey : adminKeys) {
            if (key == adminKey) {
                return true;
            }
        }
        return false;
    }

    bool userLogin(int accNum, string pin) {
        if (users.find(accNum) != users.end() && users[accNum].pin == pin) {
            return true;
        }
        return false;
    }

    void addUser(int accNum, string pin, double balance) {
        if (users.find(accNum) != users.end()) {
            cout << "User with this account number already exists!" << endl;
        } else {
            users[accNum] = User(accNum, pin, balance);
            cout << "User added successfully!" << endl;
        }
    }

    void adminPanel() {
        string adminKey;
        cout << "Enter admin key: ";
        cin >> adminKey;
        if (adminLogin(adminKey)) {
            cout << "Admin logged in successfully!" << endl;
            char choice;
            do {
                cout << "\nAdmin Menu:\n";
                cout << "1. Add new user\n";
                cout << "2. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;
                if (choice == '1') {
                    int accNum;
                    string pin;
                    double balance;
                    cout << "Enter account number: ";
                    cin >> accNum;
                    cout << "Enter PIN: ";
                    cin >> pin;
                    cout << "Enter initial balance: ";
                    cin >> balance;
                    addUser(accNum, pin, balance);
                }
            } while (choice != '2');
        } else {
            cout << "Invalid admin key!" << endl;
        }
    }

    void userPanel() {
        int accNum;
        string pin;
        cout << "Enter account number: ";
        cin >> accNum;
        cout << "Enter PIN: ";
        cin >> pin;

        if (userLogin(accNum, pin)) {
            cout << "User logged in successfully!" << endl;
            char choice;
            do {
                cout << "\nUser Menu:\n";
                cout << "1. Balance Inquiry\n";
                cout << "2. Withdraw\n";
                cout << "3. Deposit\n";
                cout << "4. Change PIN\n";
                cout << "5. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                if (choice == '1') {
                    users[accNum].displayBalance();
                } else if (choice == '2') {
                    double amount;
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    users[accNum].withdraw(amount);
                } else if (choice == '3') {
                    double amount;
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    users[accNum].deposit(amount);
                } else if (choice == '4') {
                    string newPIN;
                    cout << "Enter new PIN: ";
                    cin >> newPIN;
                    users[accNum].changePIN(newPIN);
                }
            } while (choice != '5');
        } else {
            cout << "Invalid login details!" << endl;
        }
    }
};

int main() {
    ATMSystem atm;
    char panelChoice;
    do {
        cout << "\nWelcome to the ATM System\n";
        cout << "1. Admin Panel\n";
        cout << "2. User Panel\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> panelChoice;

        if (panelChoice == '1') {
            atm.adminPanel();
        } else if (panelChoice == '2') {
            atm.userPanel();
        }
    } while (panelChoice != '3');

    cout << "Exiting ATM System. Goodbye!" << endl;
    return 0;
}
