#include <bits/stdc++.h>

using namespace std;

//BINARY EXPONENTATION REPRESENTING THE A^B
//THE TC IS O(LOG(N))
const int MOD=1e9+7;




int powerrec(int a,int b){

if(b==0) return 1;
if(b==1) return a;

int answerofhalf=(powerrec(a,n/2)%MOD);
if(b%2==0) return (answerofhalf*answerofhalf)%MOD;
else return ((((answerofhalf*answerofhalf)%MOD)*a)%MOD);


}


int power(int a,int b){

a%=MOD;
int result=1;
while(b>0){
if(b&1)
 result=(result*a)%MOD;
a=(a*a)%MOD;
b=b>>1;
}
return result;    
}


int main(){
cout<<power(2,5);
    return 0;
}