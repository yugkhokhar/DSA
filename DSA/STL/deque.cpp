#include<iostream>
#include<deque>


using namespace std;

int main(){

deque<int>d;

d.push_back(1);
d.push_front(2);
d.pop_front();
d.pop_back();
cout<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1); //to delete first element
d.at(2);










    return 0;
}