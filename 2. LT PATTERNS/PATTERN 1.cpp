//PATTERN 1
//**** */
//**** */
//**** */
//**** */

#include<bits/stdc++.h>
using namespace std;

void printPattern1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == n - 1 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin>> n;
    printPattern1(n);
    cout << endl;
    return 0;
}