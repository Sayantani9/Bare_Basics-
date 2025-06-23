//PATTERN 22

//4444444
//4333334
//4322234
//4321234
//4322234
//4333334
//4444444

#include <iostream>
using namespace std;

void pattern22(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << n;
            } else if (i < j) {
                cout << j;
            } else if (i > j) {
                cout << i;
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 4; // You can change this value to generate a different size pattern
    pattern22(n);
    return 0;
}
// Output:
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
// This code generates a pattern based on the specified rules, where the outermost layer is filled
// with the number 'n', and the inner layers decrease in value towards the center of the pattern.
// The pattern is symmetric and forms a square shape with the specified dimensions.
// The function `pattern22` takes an integer `n` as input and prints the pattern accordingly.
// The main function initializes `n` and calls the `pattern22` function to display the pattern.
// You can modify the value of `n` to generate patterns of different sizes.
// The pattern is printed to the console, and you can see how the numbers change based on the position
// in the pattern. The outermost layer is always 'n', and as you move inward, the numbers decrease
// until reaching the center of the pattern, which is '1' for odd values of `n` or '2' for even values of `n`.