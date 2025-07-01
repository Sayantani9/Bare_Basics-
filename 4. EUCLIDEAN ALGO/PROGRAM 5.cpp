//PROGRAM 5

//DIVISORS OF DIGITS

#include<bits/stdc++.h>
#include<iostream>
uisng namespace std;

/**
 * This program takes an integer input from the user and prints all the divisors of that integer.
 * It iterates from 1 to the number itself and checks if the current number divides the input number evenly.
 * If it does, it prints that number as a divisor.


void printDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    printDivision(n);
    return 0;
}

*/

void printDivisors(int n)
{
    vector<int>ls;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
            ls.push_back(i);
            if(i != n/i)
            { // To avoid adding the square root twice
                ls.push_back(n/i);
            }
        }
    }
    //Why only up to √n?
    //Because divisors come in pairs. If i divides n, so does n/i.
    //Ex: For n = 36, divisor pairs: (1,36), (2,18), (3,12), (4,9), (6,6)

    sort(ls.begin(), ls.end());
    for(auto it:ls)
    cout << it << " ";

    int main() 
    {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
    }
}
// The time complexity is O(sqrt(n)) due to the loop running up to the square root of n.
// The space complexity is O(k) where k is the number of divisors,
// which is generally much smaller than n, especially for large numbers.
// This approach is efficient for finding divisors of large numbers.