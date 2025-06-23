// PATTERN 10
//*
//**
//***
//****
//*****
//****
//***
//**
//*

#include<bits//stdc++.h>
using namespace std;

void pattern10(int n) {
    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    pattern10(n);
    
    return 0;
}
// This code prints a pattern of stars in the shape of a diamond.
// The first half increases the number of stars from 1 to n,
// and the second half decreases it back to 1.
// The user can input the number of rows for the upper part of the pattern.
// The pattern is symmetric and visually appealing.
// The time complexity is O(n^2) due to the nested loops for printing stars.
// The space complexity is O(1) as we are not using any additional data structures.
// The code is efficient for reasonable values of n and provides a clear output.
// The pattern can be modified by changing the number of rows or the character used.
// The code is simple and easy to understand, making it suitable for beginners in C++.
//EXPLANATION OF THE CODE:
// The code defines a function `pattern10` that takes an integer `n` as input.
// It first prints the upper part of the pattern by iterating from 1 to n,
// printing stars in increasing order.
// Then, it prints the lower part of the pattern by iterating from n-1 down to 1,
// printing stars in decreasing order.
// The `main` function prompts the user to enter the number of rows,
// calls the `pattern10` function, and displays the pattern accordingly.
// The code is structured to be clear and concise, making it easy to follow.