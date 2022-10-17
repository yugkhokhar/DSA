#include<bits/stdc++.h>

using namespace std;

int main() {

int n,m;cin>>n>>m;
int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>a[n][m];
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = i; i < m; j++)
    {
        
int temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;


    }
}






    return 0;
}