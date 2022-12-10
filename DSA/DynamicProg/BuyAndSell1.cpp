#include<bits/stdc++.h>

using namespace std;

int main(){

    int prices=[50,15,30,20,19];

    int profit=0;
    int miniValue=prices[0];

for (size_t i = 1; i < prices.length(); i++)
{
    int diff=prices[i]-miniValue;
    profit=max(profit,diff);
miniValue=min(miniValue,prices[i]);
}
cout<<profit;

    return 0; 
}