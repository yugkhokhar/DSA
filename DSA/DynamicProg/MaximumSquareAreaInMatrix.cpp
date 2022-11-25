#include<bits/stdc++.h>
#define ll long long
#define l long
#define vi vector<int>
#define ai(n) int arr[n];
#define ac(n) char arr[n];
#define pii pair<int,int>
#define pll pair<long,long>
#define vii vector<vector<int>>
#define vpii vector<pair<int,int>>
#define vpcc vector<pair<char,char>>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repp(b) for(auto &a:b)
#define vs vector<string>
#define  MOD 1e9+7
#define  N 1e5+2
#define  si set<int>
#define  sl set<long>
#define  sc set<char>
#define  ss set<string>
#define  mii map<int,int>
#define  umii unordered_map<int,int>
#define  mic map<int,char>
#define  umic unordered_map<int,char>
#define  mis map<int,string>
#define  umis unorderd_map<int,string>
using namespace std;


int MaximumSquareMatrix(vector<vector<int>>&matrix,int idx1,int idx2,int&maxi){
if(idx1>=matrix.size() || idx2>=matrix[0].size()) return 0;

int right=MaximumSquareMatrix(matrix,idx1,idx2+1,maxi);
int down=MaximumSquareMatrix(matrix,idx1+1,idx2,maxi);
int diagonal=MaximumSquareMatrix(matrix,idx1+1,idx2+1,maxi);


if(matrix[idx1][idx2]==1) {
int ans=min({right,down,diagonal});
maxi=max(maxi,ans);
return maxi;
}

else return 0;

}


int MaximumSquareMemoisation(vector<vector<int>>&matrix,int idx1,int idx2,int&maxi,vector<vector<int>>&dp){

if(idx1>=matrix.size() || idx2>=matrix[0].size()) return 0;
if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
int right=MaximumSquareMemoisation(matrix,idx1,idx2+1,maxi,dp);
int bottom=MaximumSquareMemoisation(matrix,idx1+1,idx2,maxi,dp);
int diagonal=MaximumSquareMemoisation(matrix,idx1+1,idx2+1,maxi,dp);

if(dp[idx1][idx2]==1) {
dp[idx1][idx2]=min({right,bottom,diagonal});
maxi=max(maxi,dp[idx1][idx2]);
return dp[idx1][idx2];
}
else return dp[idx1][idx2]=0;
}



signed main()
{
int n,m,maxi=0;cin>>n>>m;
vii matrix(n,vector<int>(m));
rep(i,0,n){
  rep(j,0,m){
    cin>>matrix[i][j];
  }
}
vii dp(n,vector<int>(m,-1));
MaximumSquareMemoisation(matrix,0,0,maxi,dp);
cout<<maxi<<endl;
return 0;
}
