#include<bits/stdc++.h>

using namespace std;

int operationsconvert(string s1,string s2)
{
int size1=s1.length();
int size2=s2.length();
if(size1!=size2)
{
    return -1;
}
int res=0;
for(int i=size1-1,j=size2-1;i>=0;)
{
if(s1[i]==s2[j])
{
    i--;
    j--;
} 

while (i>=0 && s1[i]!=s2[j])
{
    res++;
    i--;
}

}
return res;


}


int main()
{
     string s1="BCDA",s2="ABCD";
   
 cout<< operationsconvert(s1,s2);



return 0;


}