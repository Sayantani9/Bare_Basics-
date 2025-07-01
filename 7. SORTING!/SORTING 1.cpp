//SORTING PROGRAM 1
//SELECTION SORTING PROCEDURE!
//MINIMUM ONE BY ONE KEEPS GETTING ARRANGED ONE BY ONE!!
//LAST INDEX IN AN ARRAYIS N-1.

#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i =0; i<=n-2;i++)
    {
        int mini=i;
        for(int j =i; j<=n-1;j++)
        {
            if(arr[j] < arr[mini])
            {
                mini=j;
            }
        }

        int temp= arr[mini];
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
    cin>>arr[i];
    selection_ort(arr, n);
    for(int i = 0; i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//TIME COMPLEXITY: 
