//Program 14
//PASS BY VALUE.
#include<bits/stdc++.h>
using namespace std;

void doSomething(string s)
{
    s[0]='t';
    cout<<s<<endl;
}
int main(){
    string s ="hello";
    cout<<s<<endl;
    doSomething(s);
    cout<<s<<endl; // s remains unchanged
    // This demonstrates that the string is passed by value,
    // meaning a copy of the string is made for the function.
    // Changes made to 's' inside doSomething do not affect the original string.
    // If you want to modify the original string, you would need to pass it by reference
    // or use a pointer. & passes the address of the variable,
    // while * dereferences the pointer to access the original variable.
    // Example of passing by value:
    // void doSomething(string s) { s[0] = 't'; }
    // Example of passing by reference:
    // void doSomething(string &s) { s[0] = 't'; }
    // Example of passing by pointer:
    // void doSomething(string *s) { (*s)[0] = 't';
    return 0;
}
