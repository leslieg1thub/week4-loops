//cpp
//
// INPUT VALIDATION WITH WHILE LOOP
//
#include <iostream>
using namespace std;
int main() {
    
    // Declare an integer variable to hold the user's input
    int number;
    cout << "Enter a positive number: ";
    cin >> number;
    
    // While loop checks condition before executing the body
    // If the user enters a positive number, the loop never runs
    // If the user enters a negative number, the loop will continue to prompt for input
    while (number <= 0) {
        cout << "Invalid! Please enter a positive number: ";
        cin >> number;
    } // End of while loop - condition is re-checked

    // This line runs after the user has entered a valid positive number
    cout << "You entered: " << number << endl;

    return 0;
}
