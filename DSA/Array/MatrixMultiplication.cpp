#include<bits/stdc++.h>

using namespace std;

int main() {

int n,m;cin>>n1>>n2>>n3;
int a[n1][n2],b[n2][n3],c[n1][n3];
int row_start=0,row_end=n-1,col_start=0,col_end=m-1;

for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n2; j++)
    {
        cin>>a[n1][n2];
    }
}

for (int i = 0; i < n2; i++)
{
    for (int j = 0; j < n3; j++)
    {
        cin>>a[n2][n3];
    }
}


for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n3; j++)
    {
        for (int k = 0; k < n2; k++)
        {
           c[i][j]=a[i][j]*b[j][k];
        }
    }
}


return 0;
}