//PATTERN 17
//   A
//  ABA
// ABCBA
//ABCDCBA

#include<bits//stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print increasing characters
        for (int j = 1; j <= i; j++) {
            cout << ch++;
        }
        // Print decreasing characters
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch--;
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
// Sample Input: 4
// Sample Output:
//    A
//   ABA
//  ABCBA
// ABCDCBA
// Explanation: The pattern consists of characters starting from 'A' and increasing to the row number
// and then decreasing back to 'A', with leading spaces to align the pattern.
// The pattern is symmetric and centered, with each row containing characters in a palindromic
// arrangement.
// The first row has one character, the second row has three characters, and so on,
// with the last row containing characters from 'A' to 'D' and back to 'A'.
// The leading spaces ensure that the pattern is centered when printed.
// The pattern can be adjusted by changing the input value of n.
// The pattern is useful for understanding nested loops and character manipulation in C++.
// The code uses nested loops to achieve the desired output, demonstrating control over character printing.
//EXPLANATION OF THE CODE:
// 1. The outer loop iterates through each row.
// 2. The first inner loop prints leading spaces to align the characters.
// 3. The second inner loop prints characters in increasing order from 'A' to the
//    current row character.
// 4. The third inner loop prints characters in decreasing order back to 'A'.
// 5. The character variable `ch` is adjusted to ensure the correct sequence of characters
//    is printed in each row.
// 6. The program prompts the user for the number of rows and calls the `pattern` function to display the pattern.
// 7. The pattern is symmetric and centered, with each row containing characters in a palindromic arrangement.
// 8. The leading spaces ensure that the pattern is centered when printed.
// 9. The pattern can be adjusted by changing the input value of `n`.
// 10. The pattern is useful for understanding nested loops and character manipulation in C++
// 11. The code uses nested loops to achieve the desired output, demonstrating control over character
//     printing and alignment in console output.
