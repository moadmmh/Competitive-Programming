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
void dfs(int x){    
    visited[x]=1;
    for(int i=0;i<sz(grp[x]);++i){
        for(int j=1;j<=n;++j){
            if(find(all(grp[j]),grp[x][i])!=grp[j].end() and !visited[j])
                dfs(j);
        }
    }
    return ;
}

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    cin>>n>>m;
    int a,b;
    grp.resize(n+1);
    for(int i=1;i<=n;++i){
        int x;sf(x);
        while(x--){
            int lang;sf(lang);
            grp[i].pb(lang);
        }
    }
    int temp=0;
    for(int i=1;i<=n;++i){
        if(grp[i].empty())
            temp+=1;
    }
    if(temp==n){cout<<n<<endl; return 0;}
    memset(visited,0,sizeof visited);
    dfs(1);
    int cnt=0;
    for(int i=1;i<=n;++i){
        if(!visited[i]){
            dfs(i);
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
