#include<bits/stdc++.h>

using namespace std;

vector<vector<int>>ans;

void allpermuations(vector<int>&a,int idx){

if(idx==a.size()){
ans.push_back(a);
return ;
}
//recursion
for (int i = idx; i < a.size(); i++)
{
swap(a[i],a[idx]);
allpermuations(a,idx+1);
swap(a[i],a[idx]);
}
return;




}



int main(){

//STL
int n;cin>>n;
vector<int>a(n);
sort(a.begin(),a.end());
do
{
    ans.push_back(a);
} while(next_permutation(a.begin(),a.end()));


    return 0;
}