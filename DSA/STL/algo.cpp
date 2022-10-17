#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){


vector<int>n;
n.push_back(10);
n.push_back(20);
n.push_back(30);
n.push_back(40);
n.push_back(50);

cout<<binary_search(n.begin(),n.end(),20)<<endl;

//returns a value that is not small than value
cout<<lower_bound(n.begin(),n.end(),20)-n.begin()<<endl;
//returns a value that is greater than value
cout<<upper_bound(n.begin(),n.end(),20)-n.begin()<<endl;

//the [first,last) this will rotate the array by one position from front
rotate(v.begin(),v.begin()+1,v.end());

string name="yug";
reverse(name.begin(),name.end());


int a=10;
int b=20;
cout<<max(a,b)<<endl;
int maxvalue=n[0];
for(auto i=1;i<n.size();i++)
{

maxvalue=max(maxvalue,n[i]);

sort(n.begin(),n.end());

}



return 0;
}