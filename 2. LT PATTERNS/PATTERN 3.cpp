//PATTERN 3
//1
//12
//123
//1234
//12345

#include<bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
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
// Sample Input: 5
// Sample Output:
// 1
// 12
// 123
// 1234
// 12345
// Explanation: The program prints a pattern of numbers where each row contains numbers starting from 1
// up to the row number. The outer loop iterates through each row, and the inner loop prints the numbers from 1 to the current row number. The result is a right-angled triangle of numbers, with each row containing an increasing sequence of integers starting from 1. The program prompts the user to enter the number of rows, and then it generates the pattern accordingly. The output
// is displayed in a structured format, with each row printed on a new line. The pattern is simple yet effective for demonstrating nested loops in C++.
