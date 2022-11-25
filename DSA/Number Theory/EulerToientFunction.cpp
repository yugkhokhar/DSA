    #include<bits/stdc++.h>

using namespace std;

//This function is used to find the amount of numbers that are less than  a number that are relatively prime with that number;



int gcd(int a,int b)
{
if(a==0) return b;
if(b==0) return a;

return gcd(b,a%b);
}

int main(){

int number;
cin>>number;

for (int i=2; i <=number; i++)
{
int nums=0;
    
for (int j=i-1; j>=1;j--)
{
    int ans=gcd(i,j);
    if(ans==1) nums++;   
}
cout<<nums<<" ";

}

  return 0;
}