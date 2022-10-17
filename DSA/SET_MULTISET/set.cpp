#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int>s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(5);
    s1.insert(7);

    multiset<int>s2;
    s2.insert(10);
    s2.insert(20);
    s2.insert(5);
    s2.insert(7);
    s2.insert(7);
    s2.insert(7);


    for(auto i:s2)  //value
    {
        cout<<i<<" ";
    }
cout<<"\n";
s2.erase(s2.find(7)); //this only deletes the one iterator of the found element
s2.erase(7); //this delete every element instance in set

for(auto i:s2)
{
    cout<<i<<" ";
}


    return 0;
}