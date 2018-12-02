#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p()     printf("\n")
#define ps()    printf(" ")
#define ll long long
#define ull unsigned long long
#define mod 1e9+1
#define MAX 1000000005
#define pi 3.1415926536
#define ex 1e12
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

vector<ll>A,B;

vector<ll> coll(ll x){
    vector<ll>v;
   v.pb(x);
    while(x!=1){
        if(x&1){
            x*=3;
            x+=1;
        }
        else
            x/=2;
        v.pb(x);
    }
    return v;
}
ll find(ll n,vector<ll>v){
    for(int i=0;i<sz(v);++i){
        if(v[i]==n)
            return i;
    }
    return -1;
}
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b;
    while(cin>>a>>b and a and b){
        B=coll(b);
        A=coll(a);
        for(int i=0;i<sz(A);++i){
            ll z=find(A[i],B);
            if(z!=-1){
                cout<<a<<" needs "<<i<<" steps, "<<b<<" needs "<<z<<" steps, they meet at "<<A[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
