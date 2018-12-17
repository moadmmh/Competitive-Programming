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
int a[100005];
map<int,int>mp;
vector<int>v;
int main() {
    //freopen("input.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        mp[x]+=1;
        if(mp[x]==1)
            v.pb(x);
    }
    //cout<<sz(v)<<endl;
    sort(all(v));
    int x=v[0];
    cout<<v[0]<<endl;
    for(int i=1;i<(int)min((int)sz(v),k);++i){
        cout<<v[i]-x<<endl;
        x=v[i];
    }
    for(int i=0;i<k-(int)sz(v);++i){
        cout<<0<<endl;
    }
    return 0;
}
