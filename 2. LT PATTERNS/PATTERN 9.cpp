//PATTERN 9
//    *
//   ***
//  *****
// *******
//********* 
// *******
//  *****
//   ***
//    *

#include<bits/stdc++.h>
using namespace std;

void pattern(int n) {
    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

ingt main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern(n);
    return 0;
}

//EXPLANATION
// The pattern consists of two parts: the upper part and the lower part.
// The upper part is created by iterating from 1 to n, where for each row
// we print spaces followed by stars. The number of spaces decreases while the
// number of stars increases.
// The lower part is created by iterating from n-1 down to 1, where
// we again print spaces followed by stars. The number of spaces increases while
// the number of stars decreases.
// The pattern is symmetric, with the widest row in the middle.

//LOOP CONTROL EXPLANATION
// The outer loop controls the number of rows.
// The first inner loop prints spaces, and the second inner loop prints stars.
// The pattern is built by adjusting the number of spaces and stars for each row.
// The first part builds the top half, and the second part builds the bottom half.
// The pattern is printed in a way that it forms a diamond shape with stars.
// The input n determines the height of the diamond, and the pattern is printed accordingly.
// The pattern is printed in a way that it forms a diamond shape with stars.
// The input n determines the height of the diamond, and the pattern is printed accordingly.
// The pattern is printed in a way that it forms a diamond shape with stars.