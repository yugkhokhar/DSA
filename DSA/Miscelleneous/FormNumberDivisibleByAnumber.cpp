#include<bits/stdc++.h>

using namespace std;



int FormNumberDivisbleByANumber(vector<int>v,int k,int n,int number){

int sum=0;
pair<int,int>ans;
for(int i=0;i<k;i++){
    sum+=v[i];
}

bool found=false;
if(sum%number==0)
ans.make_pair(0,k-1);
found=true;
}


for (int i = k; i < n; i++)
{
    if(found) break;
    sum-sum+v[i]-v[i-k];

if(sum%number==0){
    ans.make_pair(i-k+1,i);
    found=true;
}

}

if(!found) ans.make_pair(-1,0);
if(ans.first==-1){
    cout<<"No such subarray found";
}
else{
    for(int i=ans.first;i<=ans.second;i++){
        cout<<v[i]<<" " ;
        
           }
}

int main(){
    return 0;
}