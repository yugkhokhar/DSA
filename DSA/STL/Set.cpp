#include<iostream>
#include<set>


using namespace std;

int main(){
    //It is the implement of BST
    //INSERT FIND ERASE AND COUNT IS LOGN
    //SIZE BEGIN EMPTY END IS O(1)
    //set only store unique values and output in a sorted order
    //unordered set stores random values but unique     with complexity of o(1)


set<int>s;

s.insert(10);
s.insert(20);
s.insert(30);
s.insert(40);

//this will return the count 0 or 1 reprsent that the element exist or not in the set
s.count(10);

//this returns the iterator to the element
set<int>::iterator itr=s.find(20);
cout<<*itr<<" ";

for(auto it=itr;it!=s.end();it++)
{
    cout<<*it<<endl;
}

set<int>::iterator itr=s.begin();
itr++;
s.erase(itr);

for(auto i:s){
    cout<<i<<endl;
}

cout<<s.size()<<endl;
    return 0;
}