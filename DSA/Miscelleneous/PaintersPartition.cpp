#include<bits/stdc++.h>


using namespace std;

int isPossible(int boards[],int n,int limit){

int paintersreq=1,sum=0;

for (int i = 0; i < n; i++)
{
sum+=boards[i];
if(sum>limit){
    sum=boards[i];
    paintersreq++;
}
}

return paintersreq;

}


int painterpartition(int boards[],int n,int m){
int sum=0,k=0;
for (int i = 0; i < n; i++)
{
sum+=boards[i];
k=max(k,boards[i]);    
}

int low=k,high=sum;

while(low<=high){
    int mid=(low+high)/2;
    int painters=isPossible(boards,n,mid)
    if(oainters<=m){
        high=mid;
    }
    else{
        low=mid-1;
    }
}

return low;

}





int main(){
    return 0;
}