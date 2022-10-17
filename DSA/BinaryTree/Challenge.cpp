#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;

//largest minimum distance between k nodes in bst
//left and right and mid

bool isfeasible(int mid,int arr[],int n,int k){

int pos=arr[0];
int elements=1;
for(int i=1;i<n;i++)
{
    if(arr[i]-pos>=mid)
    {
        pos=arr[i];
        elements++;
    if(elements==k)
    {
        return true;
    }
    }
}
return false;
}

int largestmindistance(int arr[],int n,int k)
{
sort(arr,arr+n);

int result=-1;
int left=1;
int right=arr[n-1];

while (left<right)
{
    int mid=(left+right)/2;
    if(isfeasible(mid,arr,n,k))
    {
      result=max(result,mid);
      left=mid+1;
    }
    else{
        right=mid-1;
    }

return result;

}
}

//finding the key in a sorted and rotated array

int searchinrotate(int arr[],int key,int left,int right)
{
    if(left>right)
    {
        return -1;
    }
int mid=(left+right)/2;
if(arr[mid]==key)
{
    return mid;
}

if(arr[left]<=arr[mid])
{
    if(key>=arr[left] && key<=arr[mid])
    {
     return searchinrotate(arr,key,left,mid-1);   
    }
    return searchinrotate(arr,key,mid+1,right);
}

if(key>=arr[mid] && key<=arr[right])
{
    return searchinrotate(arr,key,mid+1,right);
}
return searchinrotate(arr,key,left,mid-1);



}



//finding the peak in an array

int peakfind(int arr[],int low,int high,int n)
{
    int mid=low+(high-low)/2;
    if((mid==0||arr[mid-1]<=arr[mid]) && (mid==n-1 ||  arr[mid+1]<=arr[mid]))
    {
        return mid;
    }
else if(arr[mid]<arr[mid-1])
{
  return  peakfind(arr,low,mid-1,n);
}
else{
    return peakfind(arr,mid+1,high,n);
}

}



//MAX SUM SUBARRAY USING SLIDERWINDOW WITH SUM<X
//O(N)
void maxsubarray(int arr[],int n,int k,int x)
{

int sum=0,ans=0;

for(int i=0;i<k;i++)
{
    sum+=arr[i];
}

if(sum<x)
{
    ans=sum;
}

for(int i=k;i<n;i++)
{
sum=sum-arr[i-k];
sum+=arr[i];

if(sum<x)
{
    ans=max(ans,sum);
}

}

cout<<ans<<" MAX SUM OF SUBARRAY";
}

//MINIMUM LENGTH OF A SUBARRAY EITH SUM>X
//O(N)
int lenghtSubarray(int arr[],int x,int n)
{

int sum=0,minlength=n+1;
int start=0,end=0;

while(end<n)
{
    while(sum<=x && end<n)
    {
        sum+=arr[end++];
    }

    while(sum>x && start<n)
    {
        if(end-start<minlength)
        {
            minlength=end-start;
        }

     sum-=arr[start++];

    }
}
return minlength;


}


// A NUMBER FORMED FORM THE K SIZE SUARRAY DIVISIBLE BY 3
//O(N)
void computesubarray(vector<int>arr,int k)
{
int sum=0;
pair<int,int>idx;
bool found=false;

for(int i=0;i<k;i++)
{
    sum+=arr[i];
}

if(sum%3==0)
{
idx=make_pair(0,k-1);
found=true;
}

for(int i=k;i<arr.size();i++)
{
    if(found)
    {
        break;
    }
sum-=arr[i-k]+arr[i];

if(sum%3==0)
{
    idx=make_pair(i-k+1,i);
}

}

if(!found){
    cout<<"NO SUCH SUBARRAY EXIST";
}
else{
    for(int i=idx.first;i<idx.second;i++){
        cout<<arr[i]<<"\n";
    }
}

}

//FINDING THE PALINDROME OF AN SUBARRAY 
//O(N^2)


bool isPalindrone(int n)
{
    int original=n,num=0;

while(original>0)
{
    int rem=n%10;
    num=num*10+rem;
    num/=10;
}

if(num==n)
{
    return true;
}

}






int palindrome(vector<int>arr,int k)
{
    int num=0;
    for(int i=0;i<k;i++)
    {
        num=num*10+arr[i];
    }

    if(isPalindrone(num))
    {
        return 0;
    }

for(int i=k;i<arr.size();i++)
{
num=(num%(pow(10,k-1)))*10+arr[i];

if(isPalindrone(num))
{
    return i-k+1;
}


}

return -1;
}





int main()
{








    return 0;
}