//PATTERN 13
//1
//23
//456
//78910
//1112131415

#include<bits//stdc++.h>
using namespace std;

void pattern13(int n) {
    int num = 1; // Starting number
    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for each column in the row
            cout << num << " "; // Print the current number
            num++; // Increment the number
        }
        cout << endl; // Move to the next line after each row
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; // Input the number of rows
    pattern13(n); // Call the function to print the pattern
    return 0; // Exit the program
}

// Sample Input: 5
// Sample Output:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// Explanation: The pattern prints numbers in increasing order, with each row containing one more number than the previous row. The first row has 1 number, the second row has 2 numbers,
// the third row has 3 numbers, and so on, up to n rows.
// The numbers are printed in a single line, separated by spaces.
// The pattern starts with 1 and continues incrementing for each number printed.
// The output is formatted such that each row contains the correct number of elements, and the numbers are aligned properly.
// The program uses nested loops: the outer loop iterates through the rows, and the inner
//EXPLANATION OF THE CODE COLUMNS & ROWS: // loop iterates through the columns of each row, printing the numbers sequentially.