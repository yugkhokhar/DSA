#include<bits/stdc++.h>


using namespace std;
    



void solve(){
    long long n;
    long long maxi=-1;
    cin>>n;
   
   int p=log2(n);
   int k=pow(2,p);
int x=k/2;
int y=n-k+1;

cout<<max(x,y)<<endl;

}





int main(){
    
long long T;
cin>>T;
while(T--)
{
    solve();
}
    return 0;
}
