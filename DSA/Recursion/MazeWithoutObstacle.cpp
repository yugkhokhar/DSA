#include <bits/stdc++.h>

using namespace std;


int noofWays(int n,int i,int j){

if(i==n-1 && j==n-1)return 1;
if(i>=n || j>=n) return 0;

return noofWays(n,i+1,j)+noofWays(n,i,j+1);


}


int main(){
cout<<noofWays(3,0,0)<<endl;
    return 0;
}