//PATTERN 18

//E
//DE
//CDE
//BCDE
//ABCDE

#include<bits//stdc++.h>
include namespace std;

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A' + n - i; // Start from the last character of the row
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++; // Move to the next character
        }
        cout << endl; // Move to the next line after each row
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; // Input the number of rows
    pattern(n); // Call the function to print the pattern
    return 0; // Return 0 to indicate successful execution
}

//EXPLANATION OF THE CODE:
// The code defines a function `pattern` that prints a specific pattern of characters based on the
// input number of rows `n`. It uses nested loops to generate the pattern, where the outer loop iterates
// through each row and the inner loop prints characters starting from a specific character determined by
// the current row number. The character starts from 'A' plus the difference between `n` and the current row index `i`, and it increments for each character printed in that row.
// The main function prompts the user for the number of rows and calls the `pattern` function to display the pattern.
// The pattern starts with 'E' for the first row and continues to 'A' for the last row, with each row containing an increasing number of characters from the starting character of that row
// to the end of the alphabet.
// The output will look like this for n = 5:
// E
// DE
// CDE
// BCDE
// ABCDE
// The pattern is printed in reverse order, starting from the last character of each row and moving
// towards the first character of the alphabet for that row.
// The program uses standard input/output libraries and defines the main function to execute the pattern printing.
// The code is structured to be clear and easy to understand, with comments explaining each part of