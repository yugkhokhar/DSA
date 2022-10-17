#include<bits/stdc++.h>

using namespace std;

int knapsack(int wi[],int val[],int n,int W){

if(n==0|| W==0) return 0;
if(wi[n-1]>W) return knapsack(wi,val,n-1,W);

return max(knapsack(wi,val,n-1,W),knapsack(wi,val,n-1,W-wi[n-1])+val[n-1]);

}




int main(){
int wi[]={100,50,300};
   int val[]={200,100,400}; 
cout<<knapsack(wi,val,3,600)<<endl;
    return 0;
}