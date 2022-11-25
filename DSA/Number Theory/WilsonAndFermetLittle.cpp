#include<bits/stdc++.h>

using namespace std;

//MODULTO INVERSE IN  FERMIT LITTLE 
//(A^P-2)%P=A^-1

//THE NUMBER N>1 IS PRIME IF AND ONLY IF IT IS (N-1)! CONGRUENT (N-1)%N


//TC-(p-n)*Log(b);

int power(int a,int b,int p){

int result=1;
a%=p;
while(b>0){
if(b%2==1) result=(result*a)%p;
a=(a*a)%p;
b=b>>1;
}

return result


}

int modinverse(int a,int p){
    return power(a,p-2,p);
}

//WILSON THEOREM
int modFactorial(int n,int p){

if(n>=p){
    return 0;
}
int res=p-1;
for (int i = n+1; i < p; i++)
{
    res=(res*modinverse(i,p))%p;
}
return res;
}


int main(){
int n,p;cin>>n>>p;
cout<<modFactorial(n,p);


    return 0;
}