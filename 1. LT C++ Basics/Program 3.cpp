//PROGRAM 3
// DATA TYPES.

#include<iostream>
using namespace std;
int main()
{
    // int, long, long long, float, double;
    //string and getline
    //float, double

    int x=10;
    long y= 1000000000;
    long long z = 1000000000000000;

    cin>>x;
    cin>>y;
    cin>>z;

    float a=5.6;
    float b=5;
    cout<<"VALUE OF A IS" <<a;
    cout<<"VALUE OF B IS"<<b;

    //declaring s=HEY STRIVER 
    //S1= HEY
    //S2=STRIVER
    //GETLINE picks up the complete line
    //char=single character.

    string s1;
    string s2;
    getline(cin, str);
    cout<<str;
    return 0;

    //int = -10*9 to +10*9
    //long= -10*12 to +10*12
    //long= -10*18 to +10*18
}