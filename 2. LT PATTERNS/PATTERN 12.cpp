//PATTERN 12

//1     1
//12   21
//123 321
//12344321

#include<bits/stdc++.h>
using namespace std;

void pattern12(int n) {
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern12(n);
    return 0;
}
// Sample Input: 4
// Sample Output:
// 1      1
// 12    21
// 123  321
// 12344321
// Explanation: The pattern consists of increasing numbers followed by spaces and then decreasing numbers, with the
// number of spaces decreasing as the row number increases.
// The first row has 1, the second row has 12 and 21, and
// so on, with the last row being a complete sequence of numbers from 1 to n and back down to 1.
// The spaces in each row are calculated as 2 * (n - i) to ensure
// the correct alignment of the pattern.
//explanation of the code:
// The function pattern12 takes an integer n as input and prints a pattern of numbers.
// It uses nested loops to print increasing numbers, spaces, and decreasing numbers for each row.
// The outer loop iterates through each row, while the inner loops handle the printing of numbers and spaces.
// The first inner loop prints increasing numbers from 1 to i, the second inner loop prints spaces, and the third inner loop prints decreasing numbers from i to 1.
// The number of spaces is calculated as 2 * (n - i) to ensure proper alignment of the pattern.
// The main function prompts the user for the number of rows and calls the pattern12 function to