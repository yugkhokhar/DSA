#include<bits/stdc++.h>

using namespace std;

void insertion(int*a,int n)
{

 for (int i = 1; i < n; i++)
 {
     int j=i-1;
     while (j>=0 && a[j]>a[i])
     {
        a[j+1]=a[j];
     }
     a[j+1]=a[i];
     
 }
    
}
//O(n^2)

int main()
{

int a[]={10,5,7,9,11,8,15};
insertion(a,sizeof(a)/sizeof(a[0]));

return 0;
}