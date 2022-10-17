#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(int num){

int temp=num,answer=0;

while(temp>0)
{
answer=answer*10+temp%10;
temp/=10;
}

if(answer==num) return true;
return false;

}

int KsizePalindrome(int arr[],int k,int n){
int num=0;

for (int i = 0; i < k; i++)
{
    num=num*10+arr[i];
}

if(isPalindrome(num)){
    return 0;
}

for (int i = k; i < n; i++)
{
    num=(num%(int)pow(10,k-1))*10 +arr[i];

if(isPalindrome(num)){
    return i-k+1;
}
}


return -1;


}





int main(){


int arr[]={2,3,5,1,1,5};
int k=4;
int ans=KsizePalindrome(arr,k,6);

if(ans==-1) cout<<"NOT FOUND ANY PALINDROME";
else{
    for (int i = ans; i < ans+k; i++)
    {
        cout<<arr[i]<<" ";
    }
}

    return 0;
}