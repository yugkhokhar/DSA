#include<bits/stdc++.h>

using namespace std;

priority_queue<int ,vector<int>,greater<int>>pmin;
priority_queue<int ,vector<int>>pmax;


void insert(int x)
{

    //WHEN BOTH HEAP SIZE ARE SAME
if(pmax.size()==pmin.size())
{

if(pmax.size()==0)
{
    pmax.push(x);
return;
}

if(x<=pmax.top())
{
    pmax.push(x);
}
else{
    pmin.push(x);
}

}
else{
// WHEN THE SIZE IS NOT EQUAL 
//CASE 1: MAXHEAP GREATER THAN MINHEAP
//CASE 2: MINHEAP GREATER THAN MAXHEAP
if(pmax.size()>pmin.size())
{
    if(pmax.top()<=x)
    {
        pmin.push(x);
    }
    else{
        int temp=pmax.top();
        pmax.pop();
        pmin.push(temp);
        pmax.push(x);
    }
}
else{

if(x<=pmin.top())
{
    pmax.push(x);
}
else{
    int temp=pmin.top();
    pmin.pop();
    pmax.push(temp);
    pmin.push(x);

}
}
}
}


double findmedian()
{
    if(pmax.size()==pmin.size())
    {
        return (pmax.top()+pmin.top())/2;
    }
    else if(pmax.size()>pmin.size())
    {
        return pmax.top();
    }
    else{
        return pmin.top();
    }
}



int main()
{
    return 0;
}