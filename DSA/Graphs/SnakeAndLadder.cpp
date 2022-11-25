#include<bitsstdc++.h>

using namespace std;

int main(){

map<int,int>ladders;
map<int,int>snakes;
vector<bool>visted(101,0);
queue<int>q;
q.push(1);
int found=false;
int moves=0;
int noofladder;cin>>noofladder;
int nooflsnakes;cin>>noofsnakes;

for (int ladder = 0; i < noofladder; i++)
{
    int from,to;cin>>from>>to;
    ladders[from]=to;
}

for (int snake = 0; i < noofsnakes; i++)
{
    int from,to;cin>>from>>to;
    snakes[from]=to;
}

while(!q.empty() and !found){

int size=q.size();

while(size--){
    int current=q.front();
    q.pop();
    for (int die=1;die<=6; die++)
    {
         if(current+die==100){
            found=true
         }
        if(current+die<=100 and ladders[current+die] and !visted[current+die]){
                visted[current+die]=true;
                if(ladders[current+die]==100){
                    found=true;
                    visted[current+die]=true;
                }
                q.push(ladders[current+die]);
        }
        else if(current+die<=100 and snakes[current+die] and !visted[current+die]){
            visted[current+die]=true;
             if(snakes[current+die]==100){
                    found=true;
                    visted[current+die]=true;
                }
                q.push(snakes[current+die]);
        }
      else if(current+die<=100 and !snakes[current+die] and !ladders[current+die] and !visted[current+die]){
        visted[current+die]=true;
        q.push(current+die);
      }

    }
}
moves++;
}

if(found) cout<<moves<<" ";
else cout<<"-1"<<" ";
    return 0;
}