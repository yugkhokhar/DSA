#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    
	    int M,N,Q;
	    cin>>M>>N>>Q;
        bool flag=false;
	   vector<pair<char,int>>v1;
	    for(int i=0;i<Q;i++)
	    {
            
	        char sign;
	        cin>>sign;
	        int digit;
	        cin>>digit;
	     if(digit<N)
         {
	      v1.push_back(make_pair(sign,digit));   
         }
     else{
     flag=true;
     break;
         }
    
        }

int passenger=0;
for(auto i:v1)
{
	   
 

           if(i.first=='+')
           {
                 if(M>(passenger+i.second))
                 {
                     M-=i.second;
                     passenger+=i.second;
                 }
            

           }
           else if(i.second=='-')
           {
               if(M>i.second)
               {
                   M+=i.second;
                   passenger-=i.second;
                    
               }
         
           }
	       
	       
	    }

	  if(M<0 || N<0 || passenger>M || passenger<0 )
      {
          cout<<"INCONSISTENT\n";
      }
      else{
          cout<<"CONSISTENT\n";
      }

	    
	    
	}
	
	return 0;
}
