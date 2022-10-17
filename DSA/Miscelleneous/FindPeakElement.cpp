#include<bits/stdc++.h>

using namespace std;



int peakElement(int arr[],int n,int low,int high){

if(low>high) return -1;

int mid=(low+high)/2;

if((mid==0||arr[mid]>arr[mid-1]) && (mid==n-1 ||arr[mid]>arr[mid+1] ))
return mid;

if(mid>0 && arr[mid]<arr[mid-1]) return peakElement(arr,n,low,mid-1);
else{
    return peakElement(arr,n,mid+1,high);
}

}




int main(){
    return 0;
}