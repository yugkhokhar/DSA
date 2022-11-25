#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;


vector<vector<int>>multiply(vector<vector<int>>&a,vector<vector<int>>&b){

int size=a.size();

vector<vector<int>>ans(size,vector<int>(size,0));


rep(i,0,size)
{
  rep(j,0,size)
  {
   rep(k,0,size)
     ans[i][j]+=a[i][k]*b[k][j];
  }
}

return ans;

}


vector<vector<int>>matrixExponentation(vector<vector<int>>&a,int n){

int size=a.size();

if(n==0){
    vector<vector<int>>identitymat(size,vector<int>(size,0));
    rep(i,0,size)
    identitymat[i][i]=1;
    return identitymat;
}

if(n==1) return a;

vector<vector<int>>restanswer=matrixExponentation(a,n/2);

vector<vector<int>>multiplyanswer=multiply(restanswer,restanswer);
if(n&1) return multiply(multiplyanswer,a);


return multiplyanswer;

}


signed main(){
    //THE ELEMENT ANS[0][1] IS THE N TH FIBO NUMBER
int n;cin>>n; 
 vector<vector<int>>intial={{1,1},{1,0}};

 vector<vector<int>>ans=matrixExponentation(intial,n);
 int size=ans.size();
 rep(i,0,size){

  rep(j,0,size)
     cout<<ans[i][j]<<" ";
   cout<<endl;  
 }
    return 0;
}