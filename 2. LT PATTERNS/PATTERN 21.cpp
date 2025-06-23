//PATTERN 21

//****
//*  *
//*  *
//****

#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the pattern (n): ";
    cin >> n;

    if (n < 2) {
        cout << "Size must be at least 2." << endl;
        return 1;
    }

    printPattern(n);
    return 0;
}
// This program prints a square pattern with stars on the borders and spaces inside.
// The user can specify the size of the pattern by entering a value for n.
// The pattern will be printed as a square of size n x n with stars on the edges
// and spaces in the middle.
// The program checks if n is at least 2 to ensure a valid pattern can be printed.
// The output will look like this for n = 4:
// ****
// *  *
// *  *
// ****
// For n = 5, it will look like this:
// *****
// *   *
// *   *
// *   *
// *****
// For n = 3, it will look like this:
// ***
// * *
// ***
// For n = 2, it will look like this:
// **
// **
// **
// For n = 1, it will not print a valid pattern and will prompt the user
// that the size must be at least 2.
// The program uses nested loops to iterate through each row and column,
// checking the conditions for printing stars or spaces.
// The outer loop iterates through each row, while the inner loop iterates through each column
// within that row. If the current position is on the border (first or last row/column),
// it prints a star; otherwise, it prints a space.