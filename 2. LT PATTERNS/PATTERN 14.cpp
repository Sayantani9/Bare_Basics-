//PATTERN 14
//A
//AB
//ABC
//ABCD
//ABCDE

#include<bits//stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
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
// A
// AB
// ABC
// ABCD
// ABCDE
// Explanation: The program prints a pattern of letters starting from 'A' to the ith letter for each row, where i is the current row number. The outer loop iterates through the number of rows, and the inner loop prints characters from 'A' to the ith character for each row
// in the pattern.
// Time Complexity: O(n^2) where n is the number of rows.
// Space Complexity: O(1) as we are using a constant amount of space for the variables.
// Note: The program uses ASCII values to print characters, where 'A' has an ASCII
// value of 65. The loop iterates from 'A' to 'A' + i - 1, effectively printing the first i letters of the alphabet for each row.
// The program is efficient for small values of n and demonstrates basic nested loops in C++.
// The program can be easily modified to print patterns with different characters or in different formats by changing