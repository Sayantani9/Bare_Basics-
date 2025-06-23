//PATTERN 15
//A
//BB
//CCC
//DDDD
//EEEEE

#include<bits/stdc++.h>
using namespace std;

void pattern15(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1; // Calculate the character to print
        for (int j = 1; j <= i; j++) {
            cout << ch; // Print the character
        }
        cout << endl; // Move to the next line after printing the row
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; // Input the number of rows
    pattern15(n); // Call the function to print the pattern
    return 0;
}
// Example usage:
// Input: 5
// Output:
// A
// BB
// CCC
// DDDD
// EEEEE
// This code prints a pattern of letters where each row contains the same letter repeated, starting from 'A' and increasing the letter for each subsequent row.
// The number of letters in each row corresponds to the row number.
// The pattern is printed in a triangular format, with the first row having 1 'A', the second row having 2 'B's, and so on up to 'E' in
// the fifth row.
// The function uses a nested loop where the outer loop iterates through the rows and the inner loop prints the characters for each row.
// The character is calculated by adding the row index to the ASCII
// value of 'A' to get the correct letter for each row.
// The program prompts the user to enter the number of rows and then calls the function to display
// the pattern based on that input.
// The output is formatted such that each row is printed on a new line, creating a visually
// appealing pattern of letters.
// 