#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;


void headpify(vector<int>&v,int n,int i){
int maxIdx=i;
int left=2*i+1;
int right=2*i+2;

if(l<n && v[l]>v[maxIdx]){
maxIdx=l;
}

if(r<n && v[r]>v[maxIdx]){
maxIdx=r;
}

if(maxIdx!=i) {
    swap(v[maxIdx],v[i]);
    headpify(v,n,maxIdx);
}
}

void heapSort(vector<int>&v){

int n=v.size();

//Creating max heap
for (int i = n/2-1; i>=0; i--)
{
    headpify(v,n,i);
}

//starting sorting
for (int i = n-1; i>=0; i--)
{    
swap(v[i],v[0]);
headpify(v,n,i);
}



}




int main(){

vector<int>v={10,20,30,4,8,6};
heapSort(v);
rep(i,0,6) cout<<v[i]<<" ";
    return 0;
}