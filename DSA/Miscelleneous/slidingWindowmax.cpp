#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;cin>>n>>k;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
int windowsum=0;
vector<int>ans;
int max_sum=INT_MIN;
//sum of first window
for (int i = 0; i < k; i++)
{
    windowsum+=a[i];
}
max_sum=max(max_sum,windowsum);
for(int i=k;i<n;i++){
windowsum=windowsum+a[i]-a[i-k];
ans.push_back(windowsum);
max_sum=max(max_sum,windowsum);
}

cout<<windowsum<<endl;
for(auto &i:ans) cout<<i<< " ";
    return 0;
}