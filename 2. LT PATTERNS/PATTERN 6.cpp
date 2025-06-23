//PATTERN 6

//12345
//1234
//123
//12
//1

#include<bits/stdc++.h>
using namespace std;

void pattern6(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern6(n);
    return 0;
}

// Output:
// Enter the number of rows: 5
// 12345
// 1234
// 123
// 12
// 1
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// The time complexity is O(n^2) because we have two nested loops: the outer
// loop runs n times and the inner loop runs i times, where i decreases from n to
// 1. The space complexity is O(1) because we are not using any additional data structures
// that grow with the input size; we are only using a constant amount of space for the
// loop variables.
//EXPLANATION:
// The outer loop runs from n to 1, controlling the number of rows.
// The inner loop runs from 1 to i, printing the numbers in each row.
// In each iteration of the outer loop, the inner loop prints numbers from 1 to i
// where i is the current row number, thus creating the desired pattern.
// The pattern is printed in reverse order, starting from n down to 1.
// The program prompts the user to enter the number of rows and then calls the
// pattern6 function to print the pattern.

