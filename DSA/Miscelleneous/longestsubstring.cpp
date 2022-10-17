#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;cin>>s;
    int i=0,j=0,maxsize=0;
        int n=s.length();
       set<char>st;
        while(j<n){
            
            if(st.count(s[j])==0){
                st.insert(s[j]);
                maxsize=max(maxsize,(int)st.size());
                j++;
            }
            else{
                st.erase(s[j]);
            }
            
            
        }
        cout<< maxsize;
    return 0;    
}
        
        
        
    