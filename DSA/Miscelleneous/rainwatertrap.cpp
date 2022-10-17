#include<bits/stdc++.h>


using namespace std;

int rainwater(vector<int>a){

int ans=0;
stack<int>st;
for(int i=0;i<n;i++){

while(!st.empty() && a[st.top()]<a[i]){
int curr=st.top();
st.pop();

if(st.empty()) break;
else{

    int length=i-st.top()-1;
    ans+=(min(a[st.top()],a[i])-a[curr])*length;
    }

}
st.push(i);
}

return ans;



}







int main(){

    return 0;
}