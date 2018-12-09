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
int n,m;
vector<vector<int>>grp;
int visited[105];
vector<int>ans;
void dfs(int x){
    visited[x]=1;
    for(int i=0;i<grp[x].size();++i){
        if(!visited[grp[x][i]])
            dfs(grp[x][i]);    
    }
    ans.pb(x);
}
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout); 
    int a,b;
    while(cin>>n>>m and n ){
        memset(visited,0,sizeof visited);
        grp.clear();
        grp.resize(n+1);
        ans.clear();
        while(m--){
            cin>>a>>b;
            grp[a].pb(b);
        }
        for(int i=1;i<=n;++i){
            if(!visited[i])
                dfs(i);
        }
        reverse(all(ans));
        for(int i=0;i<sz(ans)-1;++i){
            cout<<ans[i]<<" ";
        }
        cout<<ans[sz(ans)-1];
        p();
    }
    return 0;
}
