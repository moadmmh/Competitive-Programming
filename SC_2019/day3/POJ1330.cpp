//#include <bits/stdc++.h>
#include <iostream>
#include<cstring>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000 * 1000 * 1000 + 7
#define ex 1e18
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second
#define clr(x) x.clear()
#define LOG(x) std::cout << x << std::endl;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = 3.14159265359;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int n;
vector<int>grp[10005];
int lvl[10005];
int parent[10005];
void dfs(int x,int cnt){
    if(lvl[x]==-1)
        lvl[x]=cnt;
    for(int i=0;i<sz(grp[x]);++i){
        int n=grp[x][i];
        if(lvl[n]==-1 ){
            //parent[n]=x;
            dfs(n,cnt+1);
        }
    }
    return;
}


int main()
{
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        for(int i=0;i<=n;++i)
            grp[i].clear();
        memset(lvl,-1,sizeof lvl);
        memset(parent,-1,sizeof parent);
        for(int i=0;i<n-1;++i){
            int a,b;
            sf(a);sf(b);
            parent[b]=a;
            grp[a].pb(b);
            grp[b].pb(a);
        }
        int st=0;
        for(int i=1;i<=n;++i){
            if(parent[i]==-1){
                st=i;
            }
        }
        dfs(st,0);
        int x,y;
        cin>>x>>y;
        bool found=false;
        int currx=lvl[x];
        int curry=lvl[y];
        int ans=0;

        while(!found){
            if(currx==curry){
                found=true;
                while(x!=y){
                    x=parent[x];
                    y=parent[y];
                }
                ans=x;
            }
            else if(currx>curry){
                currx-=1;
                x=parent[x];
            }
            else {
                curry-=1;
                y=parent[y];
            }
            //cout<<currx<<" "<<curry<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
