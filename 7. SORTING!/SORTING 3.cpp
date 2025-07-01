//SORTING 3
//BUBBLE SORTING
//RUNTIME ERROR IF IT IS COMPARED WHEN IT'S COMPARED WITH THE
//NEXT NON-EXISTENT NUMBER NEXT TO IT SO RUN LOOP TILL N-1.

#include<bits/stdc++.h>
using namespace std;
void selection sort(int arr[], int n)
{
    for(int i=0; i<=n-1;i++)
    {
        int mini=i;
        for(intj=i;j<=n-1;j++)
        {
            if(arr[j]< arr[mini])
            {
                mini=j;
            }
        }
        int temp =arr[mini];
        arr[mini]=arr[i];
        arr[i]= temp;
    }
}

void bubblesort(int arr[], int n)
{
    for(int i=n-1;i>=i-1;i--)
    {
        for(int j=0;j<=1;j++)
        {
            if(arrr[j]>=arr[j+1]);
            {
                if(arr[j]> arr[j+1])
                {
                    int temp = arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
    return 0;
}