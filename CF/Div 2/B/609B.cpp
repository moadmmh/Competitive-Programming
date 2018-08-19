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
map<int,int>mp;
ll ncr(ll n,ll r){
    if(r==0) return 1;
    return n*ncr(n-1,r-1)/r;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,m;
    cin>>n>>m;
    ll sum=0,sub=0;
    for(int i=0;i<n;++i){
        int x;
        sf(x);
        mp[x]+=1;
    }
    sum=ncr(n,2);
    for(int i=1;i<=m;++i){
        if(mp[i]>1)
            sub+=ncr(mp[i],2);
    }
    cout<<sum-sub<<endl;
    return 0;
}
