//PATTERN 5
// Print the following pattern
// *****
// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);
    return 0;
}
// Sample Input: 5
// Sample Output:
// *****
// ****
// ***
// **
// *
// Explanation: The program prints a pattern of stars in decreasing order of rows, starting from the
// specified number of rows down to 1. Each row contains a number of stars equal to the current row number.
// The outer loop iterates from n down to 1, and the inner loop prints stars for the current row number. After printing all stars in a row, it moves to the next line
// for the next row.
// Time Complexity: O(n^2) where n is the number of rows, as we
// have a nested loop where the outer loop runs n times and the inner loop runs i times, where i varies from n to 1.
// Space Complexity: O(1) as we are using a constant amount of space for the
// variables used in the loops.
// The program is efficient for reasonable values of n, typically up to a few thousand, depending
// on the system's capabilities. For very large values of n, the output may become too
// large to handle comfortably in a console, but the algorithm itself remains efficient.
// The program is designed to be simple and straightforward, focusing on clarity and ease of understanding.
// It can be easily modified to change the character printed or the pattern's structure if needed.
// The program is written in C++ and uses standard input/output libraries for interaction.
