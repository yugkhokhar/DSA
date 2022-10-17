#include<bits/stdc++.h>

using namespace std;

int main(){

int n;cin>>n;
char a[n+1];
int check=1;
for (int i = 0; i < n; i++)
{
    
if(a[i]!=a[n-1-i]){
    check=0;
    break;
}

}
if(check) cout<<"The Word is Palindrome";
else cout<<"The word is not palindrome";

    return 0;
}