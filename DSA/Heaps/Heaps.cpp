#include<bits/stdc++.h>

using namespace std;


//HEAP USES PRIORITY QUEUE FOR ITS IMPLEMENTATION AND IT HAS MAX_HEAP IN STL
//PUSH AND POP O(LOG(N))
// TOP AND SIZE IS O(1)

int main(){


priority_queue<int,vector<int>>pq;
pq.push(1);
pq.push(2);
pq.push(3);
cout<<pq.top()<<" "; //PRINTS THE MAX ELEMENT
pq.pop();
cout<<pq.top()<<" ";


//MIN HEAP 
priority_queue<int,vector<int>,greater<int>>pqm;
pqm.push(1);
pqm.push(2);
pqm.push(3);
cout<< pqm.top()<< " "; //PRINTS THE MINIMUM ELEMENT
pqm.pop(); // POP 1
cout<< pqm.top()<< " ";


    return 0;
}