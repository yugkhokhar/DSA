#include<bits/stdc++.h>

using namespace std;

void Adjacency(int N,int E)
{
    int a[N][E];
    for(int i=0;i<E;i++)
    {
        int n1,n2,weight;
        cin>>n1>>n2>>weight;
        a[n1][n2]=weight; 
        a[n2][n1]=weight; 
    }
}



int main()
{






    return 0;
}