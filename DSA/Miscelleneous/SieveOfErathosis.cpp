#include<bits/stdc++.h>


using namespace std;


int sieve(int n){


    int arr[n]={0};

    for (int i = 2; i <= n; i++){

if(arr[i]==0){
    for (int j = i*i; j <= n; j+=i){
     arr[j]=1;
        }
}

}
for (int i = 0; i < n; i++)
{
if(arr[i]==0) cout<<i<<" ";    
} 
 
}


int main(){

int n;
cin>>n;
cout<<sieve(n)<<endl;



    return 0;
}