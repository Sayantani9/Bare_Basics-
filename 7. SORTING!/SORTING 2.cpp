//PROGRAM 2
//SORTING USING SELECTION SORT

#include<bits/stdc++.h>
using namespace std;
void selection sort(int arr[], int n)
{
    for(int i=0;i<=n-1;i++) 
    {
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j] < arr[mini])
            {
            mini=j;
            }
        }

        int temp = arr[mini];
        arr[mini]= arr[i];
        arr[i]= temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    selection_sort(arr,n);
    for(int i=1;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//n^2 is the time complexity as the bigo. 
//n^2/2, constant is ignored & n/2 is also ignored since small

