//PATTERN 4
//1
//22
//333
//4444
//55555

#include<bits/stdc++.h>
using namespace std;

void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern4(n);
    return 0;
}
// Sample Input: 5
// Sample Output:
// 1
// 22
// 333
// 4444
// 55555
// Explanation: The pattern prints each row with the row number repeated as many times as the row number itself.
// The outer loop iterates through each row, and the inner loop prints the row number '
// i' times.
// The pattern is simple and straightforward, demonstrating basic nested loops in C++.
// The program prompts the user to enter the number of rows and then prints the pattern accordingly.
// The time complexity is O(n^2) due to the nested loops, where n is
// the number of rows specified by the user.
// The space complexity is O(1) as no additional data structures are used.
// The program is efficient for small to moderate values of n, typically up to a few hundred rows.
// For larger values, the output may become unwieldy, but the algorithm remains efficient in terms of time complexity.
// The program can be easily modified to print different patterns by changing the logic inside the loops.
// The pattern can also be adapted to print other sequences or formats by adjusting the inner loop logic
// or the value printed in each iteration.
// The program is a good exercise for understanding nested loops and basic output formatting in C++.
// The pattern can be extended or modified to create more complex patterns or sequences as needed.
// The program is a simple yet effective demonstration of basic programming concepts in C++.
// The pattern can be used in various applications, such as generating sequences or formatting output in a
// specific way.
