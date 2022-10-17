#include<bits/stdc++.h>

using namespace std;

int main(){

int number,a,b;
cin>>number>>a>>b;

int c1=number/a;
int c2=number/b;
int c3=number/(a*b);
cout<<c1+c2-c3<<endl;

    return 0;
}