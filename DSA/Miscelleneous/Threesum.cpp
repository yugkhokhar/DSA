#include<bits/stdc++.h>


using namespace std;

int main(){

vector<int>a={10,20,3,5,7,8,9};
int target=15;
vector<int>answer;
sort(a.begin(),a.end());
bool ans=false;
for (size_t i = 0; i < a.size()-2; i++)
{
int low=i+1,high=a.size()-1;
while(low<high){
    int currentsum=a[i]+a[low]+a[high];
    if(currentsum==target) {
        ans=true;
        answer.push_back(a[i]);
        answer.push_back(a[low]);
        answer.push_back(a[high]);
        break;
    }
    else if (currentsum<target)
    {
        low++;
    }
    else {
        high--;
    }
}

}

if(ans){
    for (auto i:answer) 
    {
        cout<<i<<" ";
    }
}
else{
     cout<<"Not Found";
}
    return 0;
}