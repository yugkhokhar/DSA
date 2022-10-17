#include<bits/stdc++.h>

using namespace std;

//average O(n+k) and  worst O(n*n)

void BucketSort(int*a,int n)
{
    vector<int>v1[n];
    for (int i = 0; i < n; i++)
    {
        int b=n*a[i];
        v1[b].push_back(a[i]);
        
    }
for (int i = 0; i < n; i++)
{
    sort(v1[i].begin(),v1[i].end());
}


int index=0;
for (int i = 0; i < n; i++)
{
   for (int j = 0; j < v1[i].size(); j++)
   {
    a[index++]=v1[i][j];
   }
       
}




}


int main()
{
int a[]={10,5,7,9,11,8,15};
(a,sizeof(a)/sizeof(a[0]));



return 0;
}