#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cout<<"Enter the number you want to factorial of:";
    cin>> n;
    long long int ans=1;

    for (long long int i= n; i>=1; i--)
    {
        ans*=i;
    }
        if (n ==0)
    {
        ans=1; 

    }

    cout<<ans<<endl;

    return 0;
}
