//PROGRAM 1
// STACK OVERFLOW CODE, WILL KEEP RUNNING UNTILL MEMORY SPACES END!
//RECURSSION ONE OF THE MOST DIFFICULT TOPICS OF DSA, THEY SAY!!
// INFINITELY RUNNING THE SAME PROGRAM AGAIN AND AGAIN

#include<sbits//stdc++.h>
using namespace std;

void print()
{
    cout << 1<< endl;
    print();
}

int main()
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif

        print();

        return 0;
    }
