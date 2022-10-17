#include<bits/stdc++.h>

using namespace std;

int sieve(int n,int number){

int spf[n]={0};

for(int i=2;i<=n;i++){
spf[i]=i;
}

for(int i=2;i<=n;i++){
    if(spf[i]==i){
        for(int j=i*i;j<=n;j+=i){
        if(spf[j]==j) spf[j]=i;
        }
    }
}
while (number!=1){

cout<<spf[number]<<" ";
number=number/spf[number];


}
{
    
}


}



int main(){
    int n,number;
    cin>>n>>number;
    cout<<sieve(n,number)<<endl;
    return 0;
}