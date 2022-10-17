#include<bits/stdc++.h>

using namespace std;

//TC O(N)
void DnfSort(int a[],int n){


int low=0,mid=0,high=n-1;

while(mid<=high){

if(a[mid]==0){
    swap(&a[mid],&a[low]);
    low++;mid++;
}
else if(a[mid]==1) mid++;
else{
    swap(&a[mid],&a[high]) high--;
}
}

}



int main(){
    int a[]={1,0,1,2,0,2,1};
    int size=sizeof(a)/sizeof(a[0]);
DnfSort(a,size-1;)
for (int i = 0; i < size; i++)
{
cout<<a[i]<<" ";    
}
    return 0;
}