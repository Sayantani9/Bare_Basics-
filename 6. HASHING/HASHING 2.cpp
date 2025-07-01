//HASHING, HOW MANY TIMES ONE NUMBER APPEARS IN AN ARRAY
//GIVEN IN AN ARRAY, GIVEN NUMBER ASKED APPEARED ANY NUMBER OF TIMES
//ITERATE THROUGH THE ENTIRE ARRAY, & KEEP ADDING THE TIMES IT APPEARS
//HASHING MAKES IT FASTER IN HAPPENING, OTHER THAN ITERATING.
//CREATE AN ARRAY CALLED HASH ARRAY, FREQUENCY ARRAY, DO SOME PRECALCULATIONS
//REMEMBER, THE NUMBERS INCLUDED IN THE HASH ARRAY ALL OTHERS MARKED WITH 0.
//HASH ARRAY GOES TO EACH OF THE MEMBERS & ADDS ON TO IT

#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(itn i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    //PRE-COMPUTATION
    int hash[13] = {0};
    //INSIDE MAIN, SEGMENTATION ERROR WILL RISE, 10^6 IS MAX
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
    //FETCH 
    cout << hash[number] << endl;
    }

    return 0;
}