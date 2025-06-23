//PROGRAM 6
#inlcude<iostream.h>
using namespace std;

int main()
{
    int age;
    cin>>age;
    if(age<=18)
        cout<<"NOT ELIGIBLE FOR JOB!!";
    else if(age<=57){
        cout<<"ELIGIBLE FOR JOB!!";
        if(age>=55)
            cout<<"RETIREMENT SOON!!";
        else
            cout<<"YOU'VE JUST YEARS MORE IN SERVICE!"
        }
}