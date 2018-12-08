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
//#define ex 1e9
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()
int n,m;
int sx,sy,ex,ey;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
char a[505][505];
bool reached=false;
void dfs(int x,int y,int px,int py){
    
    if(px!=-1 or py!=-1){
        //cout<<x<<" "<<y<<endl;
        if(ex==x and ey==y and a[x][y]=='X'){
            reached=true;
            return ;
        }
        if(a[x][y]=='.'){
            a[x][y]='X';
            //cout<<x<<" "<<y<<endl;
        }
        else if(a[x][y]=='X' and (ex!=x or ey!=y)){
            return ;
        }
    }    
    for(int i=0;i<4;++i){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<1 or nx>n or ny<1 or ny>m)
            continue;
        dfs(nx,ny,x,y);
    }
    //cout<<x<<" "<<y<<endl;
    return;
}
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout); 
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>a[i][j];
        }
    }
    cin>>sx>>sy;
    cin>>ex>>ey; 
    dfs(sx,sy,-1,-1);
    cout<<(reached ? "YES" : "NO")<<endl;  
    return 0;
}
