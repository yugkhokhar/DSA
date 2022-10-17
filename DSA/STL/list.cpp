#include<iostream>
#include<list>


using namespace std;

int main(){
//implemention of doubly linked list
//nedd to iterate through the list for the access of element for delete
list<int>l(5,100);
for(int i:l)cout<<i<<endl;

l.push_front(1);
l.push_front(10);
l.push_back(20);
cout<<l.size()<<endl;
l.erase(l.begin())










    return 0;
}