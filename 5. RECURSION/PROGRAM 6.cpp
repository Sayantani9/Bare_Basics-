//PROGRAM 6
//PALINDROME

#include<bits/stdc++.h>
using namespace std;

bool f(int i, string &s)
{
    if(i>=s.size()/2)
        return true;
    if(s[i]!=s[s.size()-i-1])
        return false;
        return f(i+1,s);
}

int main()
{
    #ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    fropen("output.txt", "w", stdout);

    #endif

    string s="MADAM";
    cout<< f(0,s);
    return 0;
}
