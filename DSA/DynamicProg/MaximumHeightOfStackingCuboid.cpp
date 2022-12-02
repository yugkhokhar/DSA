#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<limits.h>
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


bool check(vector<int>&base,vector<int>&newbox){

if(base[0]>=newbox[0] && base[1]>=newbox[1] && base[2]>=newbox[2]) return true;
else return false;


}

int MaxHeight(int n,vector<vector<int>>&a){

vector<int>currRow(n+1,0);
vector<int>nextRow(n+1,0);

for (int curr=n-1 ; curr>=0; curr--)
{
  
for (int prev = curr-1; prev>=-1; prev--)
{
  
  int take=0;
  if(prev==-1 || check(a[curr],a[prev])) take=a[curr][2]+nextRow[curr+1];


int nottake=0+nextRow[prev+1];

currRow[prev+1]=max(take,nottake);
}
nextRow=currRow

}

return nextRow[0];

}








signed main()
{

int n;cin>>n;
 vector<vector<int>>cuboids;

 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < 3; j++)
    {
        cin>>a[i][j];
    }
 }
 
 for (auto &a:cuboids)
 {
    sort(a.begin(),a.end());
 }

 sort(cuboids.begin(),cuboids.end());
 
 cout<<MaxHeight(n,cuboids);



 
 return 0;
}