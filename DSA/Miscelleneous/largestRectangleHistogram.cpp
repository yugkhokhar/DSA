#include<bits/stdc++.h>

using namespace std;


void largestRectnagle(vector<int>a)
{
int size=a.size();
int ans=0;
int i=0;
stack<int>st;
while(i<n){
st.push(0);

while(!st.empty() && a[st.top()]>a[i]){

int t=st.top();
int height=a[t];
st.pop();


if(st.empty()){
    ans=max(ans,h*i);
}
else{
    int len=i-st.top()-1;
    ans=max(ans,len*height);
}

}
st.push(i);
i++;
}

return ans;

}

void bruteForce(vector<int>a){

int size=a.size();
int ans=0;
for(int i=0;i<size;i++)
{
int minh=INT_MAX;
for(int j=i;j<size;j++){

int h=min(minh,a[j]);
int len=j-i+1;
ans=max(ans,len*h);
}
}

cout<<ans<<endl;
}



int main(){






    return 0;
}