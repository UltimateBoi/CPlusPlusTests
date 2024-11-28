#include <iostream>
#include <vector>
/*
Create class for a Bank. 

Implement a constructor that initializes an 
empty list to store bank accounts. Create methods 
to add a new account to the bank, find an account 
by account number, deposit money into an account, 
withdraw money from an account, and display all accounts' 
information. Instantiate more than one object from the 
class, and show suitable testing.
*/

using namespace std;

class BankAccount {
    private:
        string accountHolder; // Attribute
        double balance; // Attribute
        int accountNumber; // Attribute
    public:
        BankAccount(string accountHolder, double balance, int accountNumber) { // Constructor
            this->accountHolder = accountHolder; // this is a pointer to the current object
            this->balance = balance; // this is a pointer to the current object
            this->accountNumber = accountNumber; // this is a pointer to the current object
        };
        void deposit(double amount) { // Method
            balance += amount; // balance = balance + amount
        };
        void withdraw(double amount) { // Method
            balance -= amount; // balance = balance - amount
        };
        double getBalance() { // Method
            return this->balance;
        };
        int getAccountNumber() { // Method
            return this->accountNumber;
        };
        string getAccountHolder() { // Method
            return this->accountHolder;
        };
};

class Bank {
    private:
        vector<BankAccount> accounts; // create a list of BankAccount objects using the vector class
    public:
        void addAccount(BankAccount account) {
            accounts.push_back(account); // add account to the list of accounts using the push_back method which adds an element to the end of the vector
        };
        BankAccount* findAccount(string accountHolder) {
            for (int i = 0; i < accounts.size(); i++) { // loop through the list of accounts
                if (accounts[i].getAccountHolder() == accountHolder) { // check if the account holder matches the account holder passed in
                    return &accounts[i];
                }
            }
            return nullptr; // return null pointer if no account is found
        };
        void displayAccounts() {
            for (int i = 0; i < accounts.size(); i++) {
                cout << "Account Holder: " << accounts[i].getAccountHolder() << endl;
                cout << "Balance: " << accounts[i].getBalance() << endl;
            }
        };
};