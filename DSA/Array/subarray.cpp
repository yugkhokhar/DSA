#include<bits/stdc++.h>


using namespace std;

int main()
{

int arr[]={110,20,30,40,50};
int size=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < size; i++)
{
    int currentsum=0;
    for (int j = i; j < size; j++){
        currentsum=currentsum+arr[j];
         cout<<currentsum <<" ";

    }cout<<endl;
    {
        
    }
}




    return 0;
}