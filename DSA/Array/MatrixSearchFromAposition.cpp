#include<bits/stdc++.h>

using namespace std;

int main(){


int n,m;cin>>n1>>n2;
int target;cin>>target;
bool flag=false;
int a[n1][n2];
int row=0,col=m-1;
for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n2; j++)
    {
        cin>>a[n1][n2];
    }
}


while(r<n && col>=0)
{

if(a[r][c]==target){
    flag=true;
    break; 
}

if(a[r][c]>target){
    c--;
}
else
{
    r++;
}

}
if (flag){
cout<<"Element Found";
}
else{
    cout<<"Element Not Found";
}


    return 0;
}