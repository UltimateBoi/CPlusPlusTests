#include <iostream>

using namespace std;

class Utils {
    public:
        // Print function
        static void print(string message) {
            cout << message << endl;
        };
        // Take input function
        static string input(string message) {
            string input;
            cout << message;
            cin >> input; // cin is used to take input from the console (basically C INput)
            return input;
        };
        // Sum of two numbers function
        static int sum(int a, int b) {
            return a + b;
        };
        // Subtract of two numbers function
        static int subtract(int a, int b) {
            return a - b;
        };
        // Multiply of two numbers function
        static int multiply(int a, int b) {
            return a * b;
        };
};