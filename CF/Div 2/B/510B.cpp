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
char a[55][55];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int visited[55][55];
bool found=false;
void dfs(int x,int y,int prevx,int prevy){
    if(visited[x][y]){
        found=true;
        return ;
    }
    visited[x][y]=1;
    for(int i=0;i<4;++i){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0 or nx>n or ny<0 or ny>m)
            continue;
        if(nx==prevx and ny==prevy)
            continue;
        if(a[x][y]==a[nx][ny]){
            dfs(nx,ny,x,y);
        }
    }
    return ;
}
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout); 
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(!visited[i][j])    
                dfs(i,j,-1,-1);
        }
    }
    cout<<(found ? "Yes" :"No")<<endl;
    return 0;
}
