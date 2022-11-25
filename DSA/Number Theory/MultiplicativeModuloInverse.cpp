#include<bits/stdc++.h>


using namespace std;
//MULTIPLICATIVE MODULO INVERSE
//(A*B)%M=1

struct triplet {
    int x,y,gcd;
};

triplet extendedEuclid(int a,int b){

if(b==0){
    triplet answertriplet;
    answertriplet.x=1;
    answertriplet.y=0;
    answertriplet.gcd=a;
return answertriplet;
}

triplet smallanswer=extendedEuclid(b,a%b);
triplet answer;
answer.x=smallanswer.y;
answer.y=smallanswer.x-(a/b)*smallanswer.y;
answer.gcd=smallanswer.gcd;
return answer;
}

int mulmodinverse(int a,int m){

triplet ans=extendedEuclid(a,m);
return ans.x;

}

int main(){
cout<<mulmodinverse(17,3);
    return 0;
}