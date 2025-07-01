//PROGRAM 3
//WAP TO CHECK IF THE GIVEN NUMBER IS PALINDROME OR NOT

#include<bits/stdc++.h>
using namespace std;

int main()
    {
        cin >> n;
        int reNum =0;
        int dup=n;
        while(n>0)
        {
            int id = n%10;
            revNum= (RevNum*10)*id;
            n=n/10;
        }
        if (dup==revNum) cout << "true";
        else cout <<"FALSE";
    }