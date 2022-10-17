#include<bits/stdc++.h>

using namespace std;


void ValueFiller(int r,int c,map<pair<int,int>,map<int,int>>&mp,vector<map<int,int>>&row,vector<map<int,int>>&col,vector<vector<char>>&a){

if(r==9){
    for (auto it:a)
    {
        for(auto j:it){
            cout<<j<<" ";
        }
        cout<<"/n";
    }
        cout<<"/n";

return ;
}


if(c==9){
ValueFiller(r+1,0,mp,row,col,a);
return ;
}

if(a[r][c]!='.'){
    helper(r,col+1,mp,row,col,a);
    return;
}

for (int i = 1; i <=9; i++)
{
    int rb=r/3,colb=c/3;
    if(!mp[{rb,colb}][i] && !row[r][i] && !col[c][i])
    {
        mp[{rb,colb}][i]=1;
        row[r][i]=1;
        col[c][i]=1;
        a[r][c]=i+'0';
        helper(r,c+1,mp,row,col,a);
        mp[{rb,colb}][i]=0;
        row[r][i]=0;
        col[c][i]=0;
        a[r][c]=i+'.';
    }

}








}


void sudokuSolver(vector<vector<char>>&a){
map<pair<int,int>,map<int,int>>mp;
vector<map<int,int>>row(9);
vector<map<int,int>>col(9);


for (int i = 0; i < 9; i++)
{
    for (int j = 0; j< 9; j++)
    {
         if(a[i][j]!='.'){
            mp[{r/3,c/3}][a[i][j]-'0']=1;
            row[i][a[i][j]-'0']=1;
            col[j][a[i][j]-'0']=1;
         }



    }
}
ValueFiller(0,0,mp,row,col,a);



}





int main(){
    return 0;
}