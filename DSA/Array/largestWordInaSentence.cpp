#include<bits/stdc++.h>

using namespace std;


int main(){


int n;
cin>>n;
cin.ignore();
char a[n+1];
cin.getline(a,n);

cin.ignore();

int i=0,currlength=0,maxlength=INT_MIN,maxst=0,st=0;
while(1)
{
if(a[i]==' ' || a[i]=='\0'){
if(currlenght>maxlength) {

maxlength=currlength;
maxst=st;
}
st=i+1;
currlength=0;
}
else
currlength++;

if(a[i]=='\0'){
    break;
}
i++;
}

for (int i = 0; i < maxlength; i++)
{
    cout<<a[i+maxst]<<endl;
}


    return 0;
}