#include<bits/stdc++.h>
using namespace std;

int hash[10000000];// 10^7 is used as global variable
int main()
{
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    //PRECOMPUTING, 10^6 is the max here.

    int hash[1000000]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }

    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
        //fetch
        cout<< hash[number] << endl;
    }
    return 0;

}