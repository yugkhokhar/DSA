#include<bits/stdc++.h>

using namespace std;
//making all the corner o to * and then convert remain to X
//and then convert the * again to O



int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>A(n,vector<char>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(  i==0 or i==n-1 or j=0 or j==m-1)
        {
         //   change(A,i,j);
        }
    }
}
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]=='O')
            {
                A[i][j]='X';
            }
        }
    }



}