#include<iostream>
#include<map>


using namespace std;

int main(){
  //MAP KEY IS UNIQUE AND  VALUES CAN BE SAME
//THE UNIQUE KEYS CAN HAVE SAME VALUES
//map gives output in sorted order
//THE TC IS O(LOGN)
//UNORDERD MAP IS WITH O(1) IMPLEMENTED USING HASHMAP
//SIMPLE MAP IS IMPLEMENTED USING RED BLACK AND BALANCE TREE


map<int,string>m;
m.insert({10,"HELLO"});
m.insert({20,"WORLD"});
m.insert({30,"MY FRIEND"});

//does the key exists
cout<<m.count(20)<<endl;

auto itr=m.find(20);

for(auto it=itr;it!=m.end;it++){
    cout<<*it<<endl;
}

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

s.erase(10);

return 0;
}