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
#define pi 3.1415926536
#define ex 1e9
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()
vector<vector<int>>grp;
int n,m;
bool visited[105];
bool dfs(int n){    
    visited[n]=1;
    for(int i=0;i<sz(grp[n]);++i){
        if(!visited[grp[n][i]])
            dfs(grp[n][i]);
    }
}
bool cycle(){

}
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    cin>>n>>m;
    int a,b;
    grp.resize(n+1);
    for(int i=0;i<m;++i){
        cin>>a>>b;
        grp[a].pb(b);
        grp[b].pb(a);
    }
    memset(visited,0,sizeof visited);
    if(n!=m){return cout<<"NO"<<endl,0;}
    bool cycle=true;
    dfs(1);
    for(int i=1;i<=n;++i){
        if(!visited[i])cycle=false;
    }
    cout<<(cycle ? "FHTAGN!" : "NO")<<endl;
    return 0;
}
