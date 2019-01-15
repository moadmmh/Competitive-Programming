#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d\n", n)
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

vector<vector<int> > grp;
int vis[25005];
int cnt[25005];

int main() {
    //freopen("input.txt","r",stdin);
    int T;
    cin>>T;
    grp.resize(T+100);
    for(int i=0;i<T;++i){
        int x;
        cin>>x;
        for(int j=0;j<x;++j){
            int y;
            cin>>y;
            grp[i].pb(y);
            //grp[y].pb(x);
        }
    }
    int n;
    cin>>n;
    while(n--){
        memset(vis,0x3f,sizeof vis);
        memset(cnt,0,sizeof cnt);
        int x;
        cin>>x;
        if((int)grp[x].size()==0){
            cout<<0<<endl;
            continue;
        }
        queue<int>q,tmp;
        q.push(x);
        tmp.push(x);
        vis[x]=0;
        while(!q.empty()){
            int y=q.front();
            q.pop();
            for(int i=0;i<(int)grp[y].size();++i){
                int v=grp[y][i];
                if(vis[v]>vis[y]+1){
                    vis[v]=vis[y]+1;
                    q.push(v);
                    tmp.push(v);
                }
            } 
        }
        int a=0,b=0;
        int startingnode=x;
        tmp.pop();
        while(!tmp.empty()){
            int z=tmp.front();
            cnt[vis[z]]+=1;
            if(vis[z]>T-1){
                tmp.pop();
                continue;
            }
            if(cnt[vis[z]]>a){
                a=cnt[vis[z]];
                b=vis[z];
            }tmp.pop();
        }/*
        for(int i=0;i<T;++i){
            if(vis[i]>T-1)
                continue;
            cnt[vis[i]]+=1;
            if(cnt[vis[i]]>a){
                a=cnt[vis[i]];
                b=vis[i];
            }
        }*/
        cout<<a<<' '<<b<<endl;
    }
    return 0;
}   
