#include <bits/stdc++.h>

using namespace std;

//Extended euclid algorithm 
// ax+by=c
struct triplet{
    int x,y,gcd;
};

triplet extendedEuclid(int a,int b){


if(b==0){
    triplet basecase;
    basecase.x=1;
    basecase.y=0;
    basecase.gcd=a;
return basecase;
}

triplet smallcase=extendedEuclid(b,a%b);
triplet ans;
ans.x=smallcase.y;
ans.gcd=smallcase.gcd;
ans.y=smallcase.x-(a/b)*smallcase.y;

return ans;

}

int main(){

int a,b;cin>>a>>b;
triplet answer=extendedEuclid(a,b);
cout<<answer.gcd<<" "<< answer.x<<" "<<answer.y<<endl;
    return 0;
}