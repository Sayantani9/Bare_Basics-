//PROGRAM 7
//FIBONACCI SERIES 0, 1, 1, 2, 3, 5, 8, 13, 21,......n

#include<bits/stdc++.h.
using namespace std;

int f(int n)
{
    if(n<=1)
    {
        return n;
        int last = f(n-1);
        int slast= f(n-2);
        return last+slast;
    }
    int main()
    {
        #ifndef ONLINE_JUDGE

        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        cout << f(4);

        return 0;
        
}


