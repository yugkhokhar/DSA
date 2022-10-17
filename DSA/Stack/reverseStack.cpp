#include<bits/stdc++.h>

using namespace std;

void insertbottom(stack<int>&st,int ele){
if(st.empty()) st.push(ele) return;

int topele=st.top();
st.pop();
insertbottom(st,ele);
st.push(topele);

}

void reversestack(stack<int>&st){

if(st.empty()) return ;

int topele=st.top();
st.pop();
reversestack(st);
insertbottom(st,topele);

}



int main(){
    return 0;
}