#include<iostream>
#include<vector>


using namespace std;

int main(){

vector<int>a;
a.push_back(10);
a.push_back(20);
a.push_back(30);
a.pop_back();
a.size();
a.capacity();
cout<< a.at(2)<<endl;

for(int i:a){cout<<i<<endl;}

vector<int>b(5,2);
vector<int>c(b);
for(int i:c)cout<<i<<endl;
for(int i:b)
{
    cout<<i<<endl;
    }
 








    return 0;
}