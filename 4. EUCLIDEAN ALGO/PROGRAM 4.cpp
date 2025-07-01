//PROGRAM 4 

//ARMSTRONG NUMBER, THE ACTUAL NUMBER = SUM OF//CUBE OF THE DIGITS

#include<bits/stdc++.h>
include namespace std;

void armstrong(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit; // Cube of the digit
        temp /= 10;
    }
    if (sum == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    armstrong(n);
    return 0;
}

//EXPLANATION OF THE CODE: 