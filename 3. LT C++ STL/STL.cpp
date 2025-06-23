//STL= STANDARD TEMPLATE LIBRARY

#include<bits/stdc++.h> //include all standard libraries, string, math
using namespace std;

void print()
{
    cout<<"raj";
}

int main(){
    print(); //function call
}

//PAIRS::

#include<stdio.h>
void explainPair()
pair <int, int> p={1,3};//data type can be anything,float/double
cout<<p.first<<" "<<p.second;
pair<int, pair<int, int>> p={1,{3,4}};
cout<<p.first<<" " p.second.second<<" "<<p.second.first;
pair<int,int> arr[]={{1,2},{2,5},{5,1}};
cout<<arr[1].second;

//VECTORS::when we don't know the size of the array, we can use vectors.
//vector is a dynamic array, it can grow and shrink in size as needed.
//it is a part of the STL, it is a template class, it can store any data type.

void explainVector()

//to change the sizes of the stuff when needed dynamically unlike array, positives of array.

vector <int> v;
v.push_back(1); //adds 1 to the end of the vector
v.push_back(2); //adds 2 to the end of the vector
v.push_back(3); //adds 3 to the end of the vector
v.push_back(4); //adds 4 to the end of the vector
v.push_back(5); //adds 5 to the end of the vector
v.emplace_back(2); //adds 2 to the end of the vector
//emplace_back is similar to push_back but it constructs the object in place.

vector<pair<int,int>>vec;

v.push_back({1,2});
v.emplace_back(1,2);

vector<int> v(5,100);

vector <int>v(5);

vector<int>v1(5,20);
vector<int>v2(v1);

vector<int>::iterator it = v.begin(); //accessing

It++;
cout<<*(it)<< “ “;
it= it+2;
cout<<*(it)<<” “;

it= it+2;
cout<< it=*(it) << “ “;

vector<int>::iterator it = v.end();
vector<int>::iterator it = v.rend();
vector<int>::iterator it = v.rbegin();

cout<<v[0]<<” “<<v.at(0);
cout<<v.back()<<” “;

for(vector<int>::iterator it= v.begin();
it!=v.end(); it++)
{
	cout<< *(it)<< “ “;
}

for(auto it = v.begin();
//auto automatically assigns the data type we need not specify.

it!=v.end();i++)
{
cout<<*(it)<< “ “;
}

for(auto it:v)
{
cout<<it<<” “;
}

v.erase(v.begin()+1);

v.erase(v.begin()+2, v.begin() +4);

vector<int>v(2,100);
v.insert(v.begin(),300);
v.insert(v.begin()+1,2,10);

vector<int> copy(2,50);
v.insert(v.begin(), copy.begin(), copy.end());

cout<<v.size();//how many elements are there in the vector
v.pop_back();

v1.swap (v2);//swapps the vectors
v.clear();
cout<<v.empty();


Void explainList()
{
list<int>ls;

ls.push_back(2);//complexity is easier, cheaper time complexity is easier.
ls.emplace_back(4);
ls.push_front(5);
ls.emplace_front();{2,4};

//rest of functions are similar to vectors: begin,end, rbegin,rend, clear, insert, size, swap 


Void explainDeque(){
deque<int>dq;
dq.push_back(1);
dq.emplace_back(2);
dq.push_front(4);
dq.emplace_front(3);

dq.pop_back();
dq.pop_front();

dq.back();
dq.front(); 

//rest of functions are same as vector:begin, end, rbegin, rend, clear, insert, size, swap

Void explainStack(){
stack<int>st;
st.push(1);//1
st.push(2);//2,1
st.push(3);//3,2,1
st.push(4);//4,3,2,1
st.emplace(5);/5,4,3,2,1//push similar.

cout<<st.top();//prints 5”**st[2]is invalid**”
st.pop();//st looks like{4,3,2,1}
cout<<st.size();//4 
cout<<st.empty();

stack<int>st1, st2;
st1.swap(st2);
}

//all the containers are the big o of 1.time complexity of 1.


Void explainQueue(){
queue<int>q;
q.push(1);//{1}
q.push(2);//{1,2}
q.emplace(4);//{1,2,4};

q.back()+=5; 

cout<<q.back(); //prints 9

// Q IS {1,2,9}

cout<<q.front(); // prints 1

q.pop(); // prints 2

cout<< q.front(); //prints 2

//size swap entry same as stack.

//in order of a queue one after the other it works.


Void explainPQ(){

priority_queue<int>pq;

pq.push(5); // {5}
pq.push(2); // {5,2}
pq.push(8); // {8,5,2}
pq.emplace(10); // {10,8,5,2}

cout<<pq.top(); //prints 10

pq.pop(); // prints 8

//size swapped empty function same as others

//minimum heap

priority queue<int, vector<int>, greater<int>>pq;

pq.push(5);//{5}
pq.push(2);//{2,5}
pq.push(8);//{2,5,8}
pq.emplace(10);//{2,5,8,10}


cout<<pq.top(); // print 2;
}

//push, top, pop all happens in the log n, keep this in mind. 

Void explainSet(){
set<int>st;

st.insert(1);// {1}
st.emplace(2);// {1,2}
st.emplace(2);// {1,2}
st.insert(4);// {1,2,4}
st.insert(3);// {1,2,3,4}

//functionality of insert in vector, can be used also that only increases efficiency
// begin(), end(), rbegin(), rend(), sixe(), emty() swap() are the same as those above.

// {1,2,3,4,5}

auto it = st.find(3);

//{1,2,3,4,5}

auto it = st.find(6);//will give as output st.end since 6 is not there in the set

//{1,4,5}

st.erase(5); //erases 5 takes the logarithmic value.

int cnt = st.count(1);

auto it = st.find(3);

st.erase(it); // it takes constant time.

//{1,2,3,4,5}

auto it1=st.find(2);
auto it2=st.find(4);
st.erase(it2,it2);
//after erase {1,4,5} [first, last]

//lower_bound() & upper bound() function works in the same way

//this is the syntax

auto it = st.lower(2);

auto it = st.upper _bound(3);

}


Void explainMultiSet()

//everything is same as set, only stores duplicate elements also

multiset<int>ms;

ms.insert(1);//{1}
ms.insert(1);//{1,1}
ms.insert(1);//{1,1,1}

ms.erase(1); // all 1s are erased

int cnt = ms.count(1);

//only 1 single 1 is erased.

ms.erase(ms.find(1));

ms.erase(ms.find(1). ms.find(1)+2);//erasing from start to end.

//rest all functions are the same as set.
}
