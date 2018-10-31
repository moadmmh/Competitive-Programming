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
#define ex 1e12
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

int n,m,k;
char a[505][505];
bool vis[505][505]={false};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void dfs(int x,int y){
    for(int i=0;i<4;++i){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(a[nx][ny]=='.' and !vis[nx][ny]){
            vis[nx][ny]=true;
            dfs(nx,ny);
        }
    }
    if(k>0){
        k--;
        a[x][y]='X';
    }

}

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    cin>>n>>m>>k;
    int stx,sty;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>a[i][j];
            if(a[i][j]=='.'){
                stx=i;  sty=j;
            }
        }
    }
    vis[stx][sty]=true;
    dfs(stx,sty);
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<a[i][j];
        }
        p();
    }
    return 0;
}
