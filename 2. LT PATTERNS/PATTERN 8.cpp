//PATTERN 8
//********* 
// *******
//  *****
//   ***
//    *

#include<bits/stdc++.h>
using namespace std;

void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern8(n);
    return 0;
}
// Example usage: If n = 5, the output will be:
// *********
// *******
//  *****
//   ***
//    *
// This code prints a right-aligned triangle pattern of stars.
// The number of rows is determined by the input value n.
// Each row starts with a number of spaces equal to the row index and then prints stars decreasing
// from n to 1.
// The pattern is right-aligned, creating a triangle shape that decreases in width with each row
// while shifting to the right.
// The outer loop iterates through each row, while the inner loops handle the spaces and stars
// respectively.
// The pattern is visually appealing and can be used in various applications such as console art or
// simple graphics in terminal applications.
//EXPLANATION OF THE PATTERN:CODE
// The pattern consists of stars arranged in a right-aligned triangle shape.
// Each row starts with a number of spaces equal to the row index, followed by stars that
// decrease in number from n to 1.
// The first row has no leading spaces and n stars, the second row has one leading space
// and n-1 stars, and so on until the last row which has n-1 leading spaces and 1 star.
// This creates a visually appealing right-aligned triangle pattern of stars.
// The pattern can be adjusted by changing the value of n, which determines the number of rows
// and the maximum number of stars in the first row.
// The code uses nested loops to achieve this, with the outer loop iterating through each row
// and the inner loops handling the spaces and stars respectively.
// The pattern can be useful in various applications such as console art, simple graphics in
// terminal applications, or as a learning exercise for understanding nested loops and pattern
// printing in programming.