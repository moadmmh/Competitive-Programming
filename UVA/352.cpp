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

int n;
char a[30][30];
bool visited[30][30]={false};

bool valid (int x,int y){
    if(x>=0 and x<=n and y>=0 and y<=n)
        return true;
    return false;
}
int dx[]={-1,-1,-1,0,1,1,1,0};
int dy[]={-1,0,1,1,1,0,-1,-1};

void dfs(int x,int y){
    //if(visited[x][y])
        //return ;
    visited[x][y]=true;
    for(int i=0;i<8;++i){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(valid(xx,yy) and !visited[xx][yy] and a[xx][yy]=='1'){
            dfs(xx,yy);
        }
    }
}

int main(){

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int x=1;
    while(sf(n)!=EOF){
        int ans=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cin>>a[i][j];
            }
        }
        memset(visited,0,sizeof visited);

        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(!visited[i][j] and a[i][j]=='1'){
                    dfs(i,j);
                    ans+=1;
                }
            }
        }
        cout<<"Image number "<<x<<" contains "<<ans<<" war eagles."<<endl;
        x+=1;

    }
    return 0;
}
