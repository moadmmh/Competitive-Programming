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
int n,m,k;
ll ans=0;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
char a[1005][1005];
int visited[1005][1005];
int temp[1005][1005];
int saveans[1000005];
void dfs(int x,int y,int refr){
    visited[x][y]=1;
    temp[x][y]=refr;
    for(int i=0;i<4;++i){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<1 or nx>n or ny<0 or ny>m-1)
            continue;
        if(a[nx][ny]=='*')
            ans+=1;
        if(a[nx][ny]=='.' and !visited[nx][ny])
            dfs(nx,ny,refr);
    }
    return;
}
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout); 
    cin>>n>>m>>k;
    for(int i=1;i<=n;++i){
        scanf("%s",a[i]);
    }
    int x,y;
    memset(visited,0,sizeof visited);
    memset(temp,-1,sizeof temp);
    for(int i=0;i<k;++i){
        sf(x);sf(y);
        ans=0;
        if(visited[x][y-1]){
            cout<<saveans[temp[x][y-1]]<<endl;
            continue;
        }
        dfs(x,y-1,i);
        saveans[i]=ans;
        cout<<ans<<endl;
    }
    return 0;
}
