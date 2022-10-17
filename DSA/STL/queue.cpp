#include<iostream>
#include<queue>


using namespace std;

int main(){

queue<int>q;

q.push(10);
q.push(20);
 q.pop();
cout<< q.front()<<endl;
cout<< q.back()<<endl;
cout<< q.size()<<endl;

priority_queue<int>maxhi;
priority_queue<int,vector<int>,greater<int>>minhi;


maxhi.push(1);
maxhi.push(200);
maxhi.push(130);
maxhi.push(400);

int n=maxhi.size();
for(int i=0;i<n;i++){
    cout<<maxhi.top()<<endl;
    maxhi.pop();
}

minhi.push(1);
minhi.push(200);
minhi.push(130);
minhi.push(400);
int m=minhi.size();
for(int i=0;i<m;i++){
    cout<<minhi.top()<<endl;
    minhi.pop();
}






    return 0;
}