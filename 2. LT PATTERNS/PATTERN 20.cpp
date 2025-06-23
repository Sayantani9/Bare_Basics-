//PATTERN 20

//*        *
//**      **
//***    ***
//****  ****
//**********
//****  ****
//***    ***
//**      **
//*        *

#include <iostream>
using namespace std;

void pattern(int n) {
    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 2; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 2; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern(n);
    return 0;
}
// Output will be the pattern as described
// Example for n = 5:
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
//EXPLANATION OF THE CODE:
// The code defines a function `pattern` that takes an integer `n` as input.    
// It prints a pattern of stars and spaces in two parts: the upper part and the lower part.
// The upper part consists of `n` rows, where each row has decreasing stars and increasing
// spaces in between. The lower part consists of `n-1` rows, where the pattern is mirrored.
// The main function prompts the user to enter the number of rows and calls the `pattern`
// function to display the pattern. The output will be a diamond-like shape made of stars.
// The pattern is symmetric and consists of stars on the edges with spaces in the middle.
// The pattern is printed in a way that the first and last rows have stars at the ends
// and the middle row has stars at both ends with spaces in between.
// The pattern is visually appealing and can be adjusted by changing the value of `n`.
// The pattern is useful for understanding nested loops and string manipulation in C++.