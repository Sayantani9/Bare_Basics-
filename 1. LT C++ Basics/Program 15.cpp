//Program 15
//PASS BY REFERENCE

#include<bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n)
{
    arr[0]+=100;
    cout<<"VALUE INSIDE FUNCTION!!"<<arr[0]<<endl;
}

int main()
{
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    doSomething(arr, n);
    cout<<"VALUE IN MAIN!!"<<arr[0]<<endl;
    return 0;
}
//EXPLANATION:
//In this program, we are passing an array to a function by reference.
//This means that any changes made to the array inside the function will affect the original array in the main function.
//When we call doSomething(arr, n), we pass the array arr and its size n to the function.
//Inside the function, we modify the first element of the array by adding 100 to it.
//After the function call, we print the first element of the array in the main function, which reflects the change made in the doSomething function.
//This demonstrates how passing by reference allows us to modify the original data directly without creating a copy.
//This is useful for efficiency, especially with large data structures like arrays.
//The output will show the modified value in both the function and the main program.
//This is a common technique in C++ to work with arrays and other data structures efficiently.
//It is important to note that when passing arrays to functions in C++, the array decays
//to a pointer, so the function receives a pointer to the first element of the array.
//This allows the function to access and modify the original array directly.
//This is different from passing by value, where a copy of the array would be made,
//and changes made inside the function would not affect the original array in the main function.
//Using pass by reference is more efficient for large arrays or complex data structures,
//as it avoids the overhead of copying data and allows direct manipulation of the original data.
//This technique is widely used in C++ programming to handle arrays and other data structures effectively.
//It is also important to ensure that the array passed to the function is large enough to accommodate
//the operations performed inside the function to avoid accessing out-of-bounds memory,
//which can lead to undefined behavior or program crashes.
//In summary, passing arrays by reference in C++ allows for efficient manipulation of data,
//enabling functions to modify the original array directly without creating unnecessary copies.
//This is a fundamental concept in C++ programming that enhances performance and flexibility when working with arrays
//and other data structures.
//TIME COMPLEXITY, what is the time complexity will be judged by the interviewer!
//CODE TAKING THE AMOUNT OF TIME TO EXECUTE
//SYSTEM DEPENDENT, NEW MODELS WILL BE FASTER THAN OLD MODELS
//RATE AT WHCIB THE TIME INCREASES WITH THE SIZE OF THE INPUT
//THE ANGLE OF THE CURVE IS THE TIME COMPLEXITY IN TERMS OF BIG O NOTATION
//PRESENTED WITH O(1), O(log n), O(n), O(n log n), O(n^2), O(2^n), O(n!)
//WORST CASE SCENARIO TIME COMPLEXITY IS CALCULATED! O(15) IS WORSE THAN O(14)
