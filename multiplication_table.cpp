//cpp
// MULTIPLICATION TABLE USING NESTED LOOPS
//
#include <iostream>
#include <iomanip> // For std::setw to format output
using namespace std;
int main() {

    //Display a title
    cout << "                                    " << endl;
    cout << "MULTIPLICATION TABLE (1-10)" << endl;
    cout << "                                    " << endl;
    cout << endl;

    // Outer loop for rows (1 to 10)
    // Part 1: int i = 1; -> Start with row 1
    // Part 2: i <= 10; -> Continue until row 10
    // Part 3: i++ -> Move to the next row
    for (int i = 1; i <= 10; i++) {

        // Inner loop for columns (1 to 10)
        // This loop completely runs for each iteration of the outer loop
        // Part 1: int j = 1; -> Start with column 1
        // Part 2: j <= 10; -> Continue until column 10
        // Part 3: j++ -> Move to the next column
        for (int j = 1; j <= 10; j++) {

            // Calculate the product of the current row and column
            int product = i * j;

            // Display the product with a field width of 5 characters
            // setw(5) ensures that each number takes up 5 spaces, aligning the columns neatly
            cout << setw(5) << product;

        } // End of inner loop - all columns for the current row have been printed
        // Move to the next line after printing all columns for the current row
        // This ensures that the next row starts on a new line
        cout << endl;
    } // End of outer loop - all rows have been printed

    // Display a closing line
    cout << "                                    " << endl;

    return 0;
}