//FIND THE MINIMUM ELEMENT FROM THE UNSORTED ELEMENT AND PUT IT INTO FIRST PLACE


#include<bits/stdc++.h>

using namespace std;

void selectionSort(int a[],int n){

for(int i=0;i<n;i++){

int minindex=i;
for(int j=i+1;j<n;j++){


if(a[minindex]>a[j]){
    minindex=j;
}
}
swap(a[minindex],a[i]);
}

for (int i = 0; i < n; i++)
{
    cout<<a[i]<<" ";
}


}




int main(){

int arr[7]={10,1,4,8,15,30,25};
selectionSort(arr,7);




    return 0;
}