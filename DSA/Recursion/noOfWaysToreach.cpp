#include<bits/stdc++.h>

using namespace std;


int noofWays(int start,int end){

    if(start==end) return 1;
    if(start>end) return 0;
    int count=0;
    for (int i = 1; i <=6; i++)
    {
        count+=noofWays(start+i,end);
    }
    return count;
}

int main(){
    permutation("ABC","");
    return 0;
}