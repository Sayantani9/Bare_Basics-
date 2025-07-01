//PROGRAM 6

//PRIME NUMBER CHECK

#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin >> n;

    int cnt=0;
    for(int i=1; i*i<n;i++)
    {
        if(n%i==0)
        {
            cnt++;
            if((n/i)!=i)
            cnt++;
        }
    }
    if(cnt==2)
        cout << "true";
    else
        count<< "false";
}