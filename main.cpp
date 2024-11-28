#include <iostream>
#include <climits>

#include "utils.cpp"
#include "bank.cpp"

using namespace std;

int main() {
    cout << "Hello, World!" << endl; // cout is used to print to the console (basically C OUTput)
    Utils::print("Hello, World!");

    // string i = Utils::input("Enter your name: ");
    // Utils::print("Hello, " + i);

    Utils::print(to_string(Utils::sum(1, 2)));
    Utils::print(to_string(Utils::subtract(4, 2)));
    Utils::print(to_string(Utils::multiply(5, 2)));

    printf("Hello, World!\n"); // printf is used to do a formatted print to the console (basically PRINT Format)

    unsigned long long int max = ULLONG_MAX;

    printf("The maximum number possible to store in c++ is: %llu\n", max);

    for (int i = 0; i <= 10; i++) { // for loop (inclusive of upper range)
        printf("%d ", i);
    }

    printf("\n");

    Bank bank;
    bank.addAccount(BankAccount("John Doe", 1000, 1));
    bank.addAccount(BankAccount("Jane Doe", 2000, 2));

    BankAccount* account = bank.findAccount("John Doe");
    BankAccount* account2 = bank.findAccount("Jane Doe");

    printf("Account Holder: %s\n", account->getAccountHolder().c_str());
    
    account->deposit(1000);
    account->withdraw(500);
    account2->deposit(2000);
    account2->withdraw(1000);

    bank.displayAccounts();

    // set colour to green
    // Set console text color to green
    #ifdef _WIN32
        system("color 0A");
    #else
        cout << "\033[32m";
    #endif

    cout << "\n\nEND\n";

    // Reset console text color to default
    #ifdef _WIN32
        system("color 07");
    #else
        cout << "\033[0m";
    #endif
    return 0;
}