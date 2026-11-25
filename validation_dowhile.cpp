//cpp
//
// INPUT VALIDATION WITH DO-WHILE LOOPS
//
#include <iostream>
using namespace std;
int main() {
    // Declare an integer variable to hold the user's input
    // Initialize it to 0 to ensure the loop runs at least once
    int number = 0;

    // Do-while loop executes the body first, then checks the condition
    // This guarantees that the user is prompted at least once, even if they enter a valid number on the first try
    do {
        cout << "Enter a positive number: ";
        cin >> number;

        if (number <= 0) {
            cout << "Invalid!" << endl;
        }
    } while (number <= 0); // Condition is checked after the body runs

    // This line runs after the user has entered a valid positive number
    cout << "You entered: " << number << endl;

    return 0;
}
