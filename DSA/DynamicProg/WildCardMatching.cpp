class Solution {
public:

bool Solve(string&s,string&p,int i,int j){

if(i<0 && j<0 ) return true;
if(i>=0 && j<0) return false;
if(i<0 && j>=0){
    for(int k=0;k<=j;k++){
        if(p[k]!='*') return false;
    }
    return true;
}

if(s[i]==p[j] || p[j]=='?') return Solve(s,p,i-1,j-1);

else if(p[j]=='*'){
    return Solve(s,p,i,j-1) || Solve(s,p,i-1,j);
}
else return false;




}

    bool isMatch(string s, string p) {
        return Solve(s,p,s.length()-1,p.length()-1);
    }
};