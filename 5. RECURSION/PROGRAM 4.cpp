//PROGRAM 4

//FACTORIAL CALCULATION USING RECURSION

#includE<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 0;

        return n*fact(n-1);
}

int main()
{
    #ifdef ONLNE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stadout);

    #endif

    int n=3;
    cout << fact(n);
    return 0;
}

