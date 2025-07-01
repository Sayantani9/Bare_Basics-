//PROGRAM 7

//GCD OR HIGHEST COMMON FACTOR

#include<iostream.h>
#include<bits/stdc++.h>
using namespce std;

int main()
{
    //EUCLIDIAN ALGORITHM MAKES IT SHORTER!
    while(a>0 && b>0)
    {
        if(a>b)
            a=a%b;

        else
            b=b%a;
    }

    if(a==0)
        return b;
    return a;
}