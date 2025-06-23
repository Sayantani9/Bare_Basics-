//PRORGRAM 4

#include<bits/std++.h>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<18)
    {
        cout<<"You are not eligible to vote."<<endl;
    }
    else if(age>=18 && age<60)
    {
        cout<<"You are eligible to vote."<<endl;
    }
    else
    {
        cout<<"You are a senior citizen and can vote."<<endl;
    }
}