#include<bits/stdc++.h>
using namespace std;
#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p() 	printf("\n")
#define ps() 	printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000000000
#define pi 3.1145926536
#define ex 1e9
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()
#define m_p(a,b) make_pair(a,b)

int visited[200005];

int st,tg;
int bfs(int st,int tg){
    qu(q);
    q.push(st);
    visited[st]=0;//at the moment we did 0 steps at the beginning
    while(!q.empty()){
        int x=q.front();
        q.pop();
        if(x== tg)
            return visited[x];//we return the overall steps that we performed
        int y;
        y=x*2;
        if(x<tg and !visited[y]){//we compared x<tg not y because the max to apply this step is y=tg-1 otherwise we will consider ourselves achieved or passed the desitination
            q.push(y);             // so y will never exceed 2*(tg-1)
            visited[y]=visited[x]+1;//steps taken by x +1 one step since we multiplied
        }
        y=x-1;
        if(y>0 and !visited[y]){//we didin't consider 0 cuz we can't substruct at the same time we can't multiply by 2
            q.push(y);
            visited[y]=visited[x]+1;//steps taken by x +1 one step since we substructed 1
        }

    }
}


int main(){

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    cin>>st>>tg;
    memset(visited,0,sizeof visited);
    cout<<bfs(st,tg)<<endl;
    return 0;
}
