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
int a[100005];
int n,m,ans=0;
bool visited[100005];
void dfs(int x,int status,int cnt){    
    visited[x]=1;
    if(status==0 and cnt<=m){
        cnt=0;
    }
    else if(status ==1){
        cnt+=1;
    }
    if(grp[x].size()==1 and visited[grp[x][0]]){
        //cout<<x<<endl;
        if(cnt<=m){
            ans+=1;
            //cout<<"get :"<<x<<endl;
        }
        return;
    }
    for(int i=0;i<sz(grp[x]);++i){
        if(!visited[grp[x][i]])
            dfs(grp[x][i],a[grp[x][i]],cnt);
    }
}

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    cin>>n>>m;
    memset(a,-1,sizeof a);
    for(int i=1;i<=n;++i){
        sf(a[i]);
    }
    int x,y;
    grp.resize(n+1);
    for(int i=1;i<n;++i){
        sf(x);sf(y);
        grp[x].pb(y);
        grp[y].pb(x);
    }
    dfs(1,a[1],0);
    cout<<ans<<endl;
    return 0;
}
