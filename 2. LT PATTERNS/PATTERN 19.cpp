//PATTERN 19

//**********
//****  ****
//***    ***
//**      **
//*        *
//**      **
//***    ***
//****  ****
//**********

#include <iostream>
using namespace std;

void pattern19(int n) {
    int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            cout << "*";
        for (k = 1; k <= 2 * i - 1; k++)
            cout << " ";
        for (j = 1; j <= n - i; j++)
            cout << "*";
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            cout << "*";
        for (k = 1; k <= 2 * i - 1; k++)
            cout << " ";
        for (j = 1; j <= n - i; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern19(n);
    return 0;
}
// Output will be a diamond-like pattern with stars and spaces
// based on the input number of rows.
// For example, if n = 5, the output will be as shown in the pattern
// The pattern consists of stars forming a diamond shape with spaces in between.
// The first half of the pattern is printed in ascending order of rows
// and the second half in descending order, creating a symmetric design.
// The pattern is centered and symmetrical, with the number of stars decreasing
// as the rows increase, and then increasing again in the second half.
// The pattern can be adjusted by changing the value of n.
// The pattern is visually appealing and can be used in various applications
// such as console art or graphical representations in text-based interfaces.

//explanation of the code:
// The function pattern19 takes an integer n as input and prints a pattern
// consisting of stars and spaces. The pattern is symmetric and consists of
// two halves: the first half prints stars followed by spaces and then stars again, 
// while the second half does the same in reverse order. The outer loop iterates
// through the rows, and the inner loops handle the printing of stars and spaces.
// The pattern is designed to create a diamond-like shape with stars on the edges
// and spaces in the middle, making it visually appealing. The main function
// prompts the user for the number of rows and calls the pattern19 function to display the pattern
// based on the input value. The pattern can be adjusted by changing the value of n.