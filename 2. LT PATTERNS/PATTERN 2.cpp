//PATTERN 2
//*
//**
//***
//****
//*****

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
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
// Output:
/*
Enter the number of rows: 5
*
**
***
****
*****
*/
// This code prints a right-angled triangle pattern of asterisks based on the number of rows specified by the user. The outer loop iterates through each row, and the inner loop prints the asterisks for that row. The pattern increases in length with each subsequent row,   resulting in a right-angled triangle shape.
// demonstrating the use of nested loops in C++.
// The user is prompted to enter the number of rows, and the pattern is printed accordingly.
// The pattern consists of asterisks, with each row containing one more asterisk than the previous row, forming a right-angled triangle shape. The outer loop iterates through each row, and the inner loop prints the asterisks for that row. The pattern increases in length
// with each subsequent row, resulting in a right-angled triangle shape.
// The code is a simple implementation of a pattern printing program in C++.
// The user is prompted to enter the number of rows, and the pattern is printed accordingly.
// The pattern consists of asterisks, with each row containing one more asterisk than the previous row, forming a right-angled triangle shape. The outer loop iterates through each row
//EXPLANATION:
// The code defines a function `printPattern` that takes an integer `n` as input
// and prints a right-angled triangle pattern of asterisks. The outer loop iterates
// through each row from 1 to `n`, and the inner loop prints the asterisks for that row.
// After printing the asterisks for each row, a newline character is printed to move to the next line.
// The `main` function prompts the user to enter the number of rows and calls the `printPattern` function with that input.
// The output is a right-angled triangle pattern of asterisks, where each row contains one more asterisk than