#include<bits/stdc++.h>
#include<stdlib.h>
#include<conio.h>


// int arr atmost size in int,double,char main is 1e+6and 1e+7 outside
// bool takes atmost 1e+7 inside int main amd 1e+8 outside
//bitset occupy 1 bit 




using namespace  std;

struct node{
  int a;
  double b;
  char c;

  node( int ab,double bb,char cc)
  {
   a=ab;
   b=bb;
   c=cc;
  }
};



namespace yug{
    int a=20;
}




int main()
{
    double a=30.0;
  cout<<yug::a<<endl;



 struct node*y =new node(10,20.0,'s');

 cout<<y->a;


// CONTAINER FOR ARRAY

array<int ,50>arr={10,20,3,0};

arr.fill(20);  // FILLS WHOLE ARRAY WITH GIVEN VALUE
cout<<arr[0];

arr.at(1); // USED TO GIVE THE VALUE FROM INDEX



//ITERATORS

array<int ,8>arr;
for(int i=0;i<5;i++)
{
  arr[i]=i+1;
}

for(auto it=arr.begin(); it!=arr.end(); it++)
{
  cout<<*it;
}


for (auto it:arr)
{
  cout<<it;
  /* code */
}

// VECTOR is used to declare unsized array

vector<int>arr1;
arr1.push_back(0);
arr1.push_back(2);
arr1.push_back(4);
arr1.push_back(5);
arr1.push_back(7);
arr1.push_back(8);  //arr1.emplace_back is more time eefficient


vector<int>arr2(arr1.begin(),arr1.begin()+3);
arr1.pop_back(); // remove last element 
arr1.clear() ; // clear whole array


vector<int>arr3;
arr1.push_back(0);
arr1.push_back(2);
arr1.push_back(4);
arr1.push_back(5);
arr1.push_back(7);
arr1.push_back(8);

//size intialised vector

vector<int>vec1(4,0) ;
vector<int>vec2(4,100) ;


//2-D VECTOR

vector<vector<int>>vec;   // vector is itself an datatype

vec.push_back(arr1);
vec.push_back(arr2);
vec.push_back(arr3);



for(auto vctr:vec )
{
  for(auto i:vctr)
  {
    cout<<i<<endl;
  }
}


//10*20
vector<vector<int>>vec(10,vector<int>(20,0));

//10*20*30

vector<vector<vector<int>>>vec(10,vector<vector<int>>(20,vector<int>(30,0)));




//COPY THE VECTOR IN ONE ANOTHER
vector<int>vec3(vec2.begin(),vec2.end()) ;
vector<int> vec3(vec2.begin(),vec2.end());
 


//set stl module

set<int>st;

int n;
cin>>n;

for(int i=0;i<n;i++)
{
  int x; 
  cin>>x;
st.insert(x);  //this takes log n tc
}

//the delete takes log n time

st.erase(st.begin(),st.end());
//st.erase(5); // ANY NUMBER


//find element in set

set<int>st1={1,23,5,1,5,1,6,65,56,10};
auto it=st.find(23);

//unordered set  nothing in order

//average time complex is o(1)
//worst tc o(n)
unordered_set<int>st2;
st2.insert(1);




//multiset helps to store in ascending even elements are not unique

multiset<int>ms;
ms.insert(1);
ms.insert(1);
ms.insert(1);
ms.insert(2);
ms.insert(2);   //log n tc
ms.insert(2);
ms.insert(3);
ms.erase(ms.begin(),ms.end());
auto it=ms.find(2);//anynumber)

//MAP STORES DIFFERENT KEY VALUES PAIR IN A SORTED FASHION
//log n
map<string,int>mmp;
mmp["yug"]=20;
mmp["aagna"]=10;
mmp["papa"]=40;
mmp["mom"]=50;
mmp["yug"]=40 ;//value of key get override

for(auto it:mmp)
{
  cout<<it.first<<" "<<it.second;
}



//pair
pair<int,string>pr;
pr.first=10;
pr.second="yug";

//unordered_map tc o(1) and o(n) worst case

unordered_map<int,int>mmp1;

mmp1[10,20];
mmp1[30,40];
mmp1[70,50];

for(auto it:mmp1)
{
 cout<< it.first << " "<<it.second;
}


//no unique  no order
multimap<int,int>mp;
mp.emplace(10,20);
mp.emplace(10,20);
mp.emplace(10,20);
mp.emplace(10,20);


//stack and queue
  // all functions take o(1) and delte takes o(n)
stack<int >sta;
sta.push(10);
sta.push(20);
sta.push(30);
sta.push(40);
sta.push(60);
sta.push(80);

while(!sta.empty())
{
  cout<<sta.top();
  sta.pop();
}

if(!sta.empty())
{
  cout<<sta.top();
}




queue<int>q;
q.push(10);
q.push(70);
q.push(30);
q.push(50);
q.push(90);
q.push(100);

q.front();
q.pop();


while(!q.empty())
{
  q.pop();
}



//priority queue stores the elements descending order from  top  
//top
//push,empty,pop,size

priority_queue<pair<int,int>>qp;
/*qp.push(1,5);
qp.push(2,6);
qp.push(4,5);
qp.push(9,5);
*/
qp.pop();
qp.top();
qp.size();


//min priority queue which puts the elemnets in ascending

priority_queue<int ,vector<int>,greater<int>>pqmin;
pqmin.push(10);
pqmin.push(10);
pqmin.push(10);
pqmin.push(10);
pqmin.push(10);
pqmin.push(10);

pqmin.top();


//dequeue
//pushfront,pushback,popfront,popback,size,at,clear,rbegin,begin,end,rend,at

deque<int>dq;


//list 
//pushfront,pushback,popfront,popback,size,at,clear,rbegin,begin,end,rend,remove
list<int>ls;
ls.push_front(10);
ls.push_back(20);
ls.remove(2); //o(1)



//bitset-> 1 BIT

//all, any, size, test, reset, count, set, flip, none

bitset<10>bt;
cin>>bt;
bt.all(); // return true if the whole size is set or same and false in unset condition


bt.any(); // returns true  if any one is a set and else false
bt.count(); // returns the number of set(1) in bitset
bt.flip(2); // puts the index number in parameter and then converts its value to 1 or 0
bt.none(); //returns true if there is no set otherwi
bt.set(); // THIS WILL SET THE WHOLE BITSET TO SET
bt.set(2); // SET THE PARTICULAR 
bt.set(2,0); // set the particular index value to 0 or 1
bt.reset(); //set the bitset to 0
bt.reset(2); //set 0 value to index


//sorting algo
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
sort(arr.begin(),arr.end());

vector<int >vec={1,2,3,4,5,0,7};
sort(vec.begin()+1,vec.end());


//get max  and min element
int max=*max_element(arr.begin(),arr.end());
int max=*min_element(arr.begin(),arr.end());

int i,j;
int sum=accumulate(arr.begin()+i-1,arr.begin()+j,0);


//get the count of an element ocuur number

int cnt=count(arr.begin(),arr.end(),1); // second parameter includes the number to find



//find method is used to finding the first occurence of an element
//returns an iterator

auto it=find(arr.begin(),arr.end(),1);


//binary search
// tc log n
bool ans=binary_search(arr.begin(),arr.end(),8);

//binary search algo

int n1;
cin>>n1;
int b[n];
for(int i=0;i<n;i++)
{
  cin>>b[i];
}
int key;
cin>>key;
binarysearch(b,key,n);




//upperbound
//returns an iterator which is the first element that is not less than x
auto it=lower_bound(arr.begin(),arr.end(),10); 


//lowerbound returns an iterator of an  element which is just greater than x
auto it=upper_bound(arr.begin(),arr.end(),10); 

// find the index of the first element not less than x

int x;
cin>>x;
auto ind=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
if(ind!=n && arr[ind]==x)
{
  cout<<"ELEMENT EXIST";
}
else{
  cout <<ind;
}



//find the last occurence of an element 

int index=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
index-=1;

if(arr[index]==x && index>=0)
{
  cout<< "THE LAST OCCURENCE OF "<<x+ " is "+index;
}
else{
  cout<<"NOT FOUND";
}


//number of time the element occured in an array
//tc is 2*log n
int ans=upper_bound(arr.begin(),arr.end(),x)-lower_bound(arr.begin(),arr.end(),x);
cout<<ans;




//all  possible permutations

 string s="bca";
 sort(s.begin(),s.end());  // o(n*log n)

// o(n!)
 do {
   cout<<s<<endl;

 }while (next_permutation(s.begin(),s.end())); // o()

 






return 0;




}

bool binarysearch(int a[],int key,int n)
{
int start=0;
int key;
cin>>key;
int end=n-1;
while(start<end)
{

int midpoint=(start+end)/2;

if(a[midpoint]==key)
{
  return true;
}
else if(a[midpoint]<key)
{
  start=midpoint+1;
}
else if(a[midpoint]>key)
{
  end=midpoint-1;
}
}






//COMPARATOR

//sort a array with pairs such that they are in sorted order and if the first element of pair is same then the pair with second element higher then other will come first in array
pair<int ,int> a[]={{1,2},{3,4},{1,0}};

sort(a,a+3,comp);









return false;
}

bool comp(pair<int,int>el1,pair<int,int>el2){

if(el1.first>el2.first)
{
  return true;
}
if(el1.first==el2.first)
{
  if(el1.second>el2.second)
  {
    return true;
  }
}
return false;
}




