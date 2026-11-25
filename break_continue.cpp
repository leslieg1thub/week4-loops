//cpp
//
// ACTIVITY 2: BREAK AND CONTINUE IN LOOPS
//
#include <iostream>
using namespace std;
int main() {
    cout << "Number filter: Skip multiples of 3, stop at 15" << endl;

    // Start a for loop from 1 to 20
    for (int i = 1; i <= 20; i++) {

        // CHECK 1: If i is exactly 15, stop the loop immediately
        // 'break' exits the loop entirely, skipping any remaining iterations
        if (i == 15) {

            cout << "Breaking at" << i << "!" << endl;

            // Exit the loop immediately- no more iterations will run
            break;
        }

        // CHECK 2: If i is divisible by 3, skip it
        // The % operator gives the remainder 
        // If i % 3 == 0, then i is a multiple of 3
        if (i % 3 == 0) {
            // 'continue' skips the rest of the current iteration and jumps back to the increment

            continue;
        }

        // DISPLAY: This line only runs if we did NOT break and did NOT continue
        // So it prints numbers that are not multiples of 3, until we hit 15
        cout << i << " ";
    } // End of for loop
    // Move to a new line after the loop finishes
    cout << endl;

    return 0;
}