//Program 13
#include<bits/stdc++.h>
using namespace std;

int maxx(int num1, int num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    int num1, num2;
    cin>>num1>>num2;
    int amximum=maxx(num1, num2);
    int minimum=minn(num1, num2);
    cout<<"Maximum: "<<amximum<<endl;
    cout<<"Minimum: "<<minimum<<endl;
    return 0;
}