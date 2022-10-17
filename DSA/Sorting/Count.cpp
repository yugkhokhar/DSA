#include<bits/stdc++.h>

using namespace std;


//O(max(Ai,N))


void countosrt(int a[],int n)
{
 int newsize=a[0];
 for (int i = 0; i <n; i++)
 {
    newsize=max(newsize,a[i]);
 }
 
 int count[newsize]={0};

 for (int i = 0; i < n; i++)
 {
     count[a[i]]++;
 }
 
for (int i = 1; i < n; i++)
{
    count[i]+=count[i-1];
}
int newarray[n];
for (int i = n-1; i>=0; i--)
{
    newarray[--count[a[i]]]=a[i];
}




}


int main()
{

int a[]={1,2,1,3,4,2,1,7,8};
int size=sizeof(a)/sizeof(a[0],size);
countosrt(a,size);



    return 0;
}