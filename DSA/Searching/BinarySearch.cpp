#include<bits/stdc++.h>
#include<vector>
using namespace std;


bool binarySearch(vector<int>v,int start,int end,int key)
{
if(start<=end){

int mid=(start+end)/2;

if(v[mid]==key){
    return true;
}
else if(v[mid]>key){
binarySearch(v,start,mid-1,key);
}
else{
binarySearch(v,mid+1,end,key);
}

}

return false;
}

int main(){

vector<int>v;
int key=5000000;
cout<<key<<endl;

for(int i=0 ; i<1000000; i++)
{
    v.push_back(i);
}
bool ans=binarySearch(v,0,99999,key);
if(ans)
{
    cout<<"Element Found"<<endl;
}
else
{
    cout<<"Element Not Found"<<endl;
}
return 0;
}