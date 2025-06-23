//PATTERN 7
//    *
//   ***
//  *****
// *******
//********* */

//inlcude<bits/stdc++.h.
using namespace std;

void pattern7(int n) {
    int i, j, k;
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern7(n);
    return 0;
}
// This code prints a pyramid pattern of stars based on the number of rows input by the user
// The outer loop iterates through each row, the first inner loop prints spaces, and the second inner loop prints stars
// The number of stars in each row is determined by the formula (2 * i - 1), where i is the current row number
// The number of spaces before the stars is determined by the formula (n - i), where n is the total number of rows
// The pattern creates a centered pyramid shape with stars, with each row having an increasing number of stars and decreasing spaces
// The program prompts the user to enter the number of rows and then calls the `pattern7` function to print the pattern
// The output will be a pyramid of stars with the specified number of rows, centered in the console
// Example output for n = 5:
//     *
//    ***
//   *****
//  *******
// *********
// The pattern is symmetric and visually appealing, making it a common exercise in programming to practice loops
// and nested structures.
// The code is efficient and straightforward, demonstrating the use of loops to create a specific pattern in C++.
// It can be easily modified to change the character used for the pattern or to adjust the number of rows.
// This pattern is often used in programming exercises to help beginners understand nested loops and character printing.
// The code is well-structured, with clear variable names and comments explaining each part of the code.
// It can be compiled and run in any C++ environment, making it accessible for learning and practice.
// The pattern can also be adapted for different shapes or designs by modifying the logic within the loops
// or by changing the characters used for printing.
// This code serves as a good example of how to create patterns using loops in C++, which is a fundamental concept in programming.
// It can be used as a starting point for more complex pattern
//creation tasks or for learning about algorithms that involve nested iterations.
// The simplicity of the code makes it easy to understand for beginners,
// while still being a useful exercise for more experienced programmers to practice their skills.
// The pattern can also be extended to create more complex designs by adding additional logic or modifying the
// existing loops. For example, one could add conditions to change the character used based on the