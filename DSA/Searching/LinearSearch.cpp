#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){

vector<int>v(1000000);
int key=rand();
cout<<key<<endl;

for(int i=0 ; i<1000000; i++)
{
    v.push_back(rand());
}
int flag=0;
for(auto j =0; j<1000000; j++)
{
    if(v[j]==key){
        flag=1;
    break;
    }
}

if(flag==0){
    cout<<"Element Not Found"<<endl;
}
else{
    cout<<"Element Found"<<endl;
}

return 0;
}