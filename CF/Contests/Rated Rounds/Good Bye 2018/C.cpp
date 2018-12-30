#include<bits/stdc++.h>
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
vector<ll>v,x;
map<ll,int>used;
int main() {
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    v.pb(1);
    v.pb(n*1LL*(n+1)/2);
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            x.pb(i);
            x.pb(n/i);
        }
    }
    for(int i=0;i<sz(x);++i){
        if(!used[x[i]]){
            ll k=x[i];
            ll cnt=0;
            ll z=n*1LL/(k*1LL);
            cnt=(1LL*(z) * 1LL*(2LL + (z - 1LL) *1LL* k))/2LL ;
            used[x[i]]=1;
            v.pb(cnt);
        }
    }
    sort(all(v));
    for(int i=0;i<sz(v);++i){
        cout<<v[i]<<" ";
    }
    p();
    return 0;
}
