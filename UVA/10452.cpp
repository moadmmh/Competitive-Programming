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

int n,m;
vector <string> ans;
pair<int,int> st;
char a[9][9];

bool valid (int x,int y){
    if(x<=n and y<=m and x>=0 and y>=0 )
        return true;
    return false;
}
string path="IEHOVA#";
int dx[]={-1,0,0};
int dy[]={0,1,-1};
string model[]={"forth", "right","left"};

void dfs(int x,int y,int pos){
    if(pos>len(path)-1) return ;
    for(int i=0;i<3;++i){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(valid(xx,yy) and path[pos]==a[xx][yy]){
            ans.pb(model[i]);
            dfs(xx,yy,pos+1);
        }
    }
}

int main(){

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int T;
    cin>>T;
    while(T--){

        cin>>n>>m;
        ans.clear();

        for(int i=0;i<n;++i){
           for(int j=0;j<m;++j){
               cin>>a[i][j];
               if(a[i][j]=='@')
                   st=m_p(i,j);
           }
        }
        dfs(st.first,st.second,0);
        cout<<ans[0];
        for(int i=1;i<sz(ans);++i){
            cout<<" "<<ans[i];
        }
        p();
    }
    return 0;
}
