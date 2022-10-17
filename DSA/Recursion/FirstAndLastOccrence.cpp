#include<bits/stdc++.h>

using namespace std;


int firstOcc(int a[],int n,int i,int key){

if(i==n) return -1;
if(a[0]==key) return i;
 return firstOcc(a,n,i+1,key);
}


int lastOccurence(int a[],int n,int j,int key){
if(j==n) return -1;
int restArray=lastOccurence(a,n,j+1,key);

if(restArray!=-1){
    return restArray;
}
if(a[j]==key) return j;

return -1;

}




int main(){

 int a[]={10,20,10,30};
 cout<<firstOcc(a,4,0,10)<<endl;
 cout<<lastOccurence(a,4,0,10)<<endl;

    return 0;
}