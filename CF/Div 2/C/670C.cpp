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

int a[200005],b[200005],c[200005];
map<int,int>mp;
vector<pair<pair<int,int>,int>>v;
pair<int,int>p[200005];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,m;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        sf(x);
        mp[x]+=1;
    }
    cin>>m;
    //very plzd
    for(int i=0;i<m;++i){
        int x;
        sf(x);
        b[i]=mp[x];
        p[i].first=mp[x];
    }
    //almst satisfied
    for(int i=0;i<m;++i){
        int x;
        sf(x);
        c[i]=mp[x];
        p[i].second=mp[x];
    }
    sort(p,p+m);
    for(int i=0;i<m;++i){
        if(b[i]==p[m-1].first and c[i]==p[m-1].second ){
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}
