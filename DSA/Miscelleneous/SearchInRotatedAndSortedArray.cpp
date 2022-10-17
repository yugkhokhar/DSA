#include<bits/stdc++.h>

using namespace std;



int SearchInRotatedArray(int arr[],int n,int key,int left,int right){

    if(left>right) return -1;
    int mid=(left+right)/2;
    if(arr[mid]==key) return mid;

if(arr[left]<=arr[mid]){
if(key>=arr[left] && key<=arr[mid]){
    return SearchInRotatedArray(arr,n,key,left,mid-1);
}
return SearchInRotatedArray(arr,n,key,mid+1,right);
}

if(key>=arr[mid] && key<=arr[right]){
    return SearchInRotatedArray(arr,n,key,mid+1,right);
}

return SearchInRotatedArray(arr,n,key,left,mid-1);

}



int main(){
    return 0;
}