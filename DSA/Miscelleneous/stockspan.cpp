#include<bits/stdc++.h>


using namespace std;

vector<int>stockspan(vector<int>prices){

stack<pair<int,int>>st;
vector<int>ans;
for(auto price:prices){
int days=1;

while(!st.empty() && st.top().first<=price){
days+=st.top().second;
st.pop();
}
st.push({price,days});
ans.push_back(days);

}
return ans;
}







int main(){
vector<int>a={100,80,60,70,60,75,85};
vector<int>ans=stockspan(a);
for(auto i:ans) cout<<i<<" ";
    return 0;
}