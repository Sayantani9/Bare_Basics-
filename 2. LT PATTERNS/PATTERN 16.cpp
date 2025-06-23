//PATTERN 16
//A
//BB
//CCC
//DDDD
//EEEEE


#include<bits//stdc++.h>
using namespace std;
void pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + i);
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
// Output:
// Enter the number of rows: 5
// A
// BB
// CCC
// DDDD
// EEEEE
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// The code prints a pattern of letters where each row contains the same letter repeated, starting from
//EXPLANATION OF THE CODE:
// 'A' for the first row, 'B' for the second row, and so
// on, with the number of repetitions equal to the row number.
// The outer loop iterates through each row, and the inner loop prints the corresponding letter
// repeated for that row. The character is determined by adding the row index to the ASCII value
// of 'A', which gives the correct letter for each row.
// The program prompts the user to enter the number of rows and then calls the pattern function to
// print the desired pattern. The time complexity is O(n^2) due to the nested