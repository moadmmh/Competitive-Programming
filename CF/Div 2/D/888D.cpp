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

ll ncr(ll n,ll r){
    if(r==0) return 1;
    return n*ncr(n-1,r-1)/r;
}
ll fact(ll n){
    if(n<=1)return 1;
    return n*fact(n-1);
}
ll der(ll n){
    if(n==0 or n==2)return 1;
    if(n==1) return 0;
    return (n-1)*(der(n-1)+der(n-2));
}
int main(){

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    for(int i=0;i<=k;++i){
        ans+=ncr(n,i)*der(i);
    }
    cout<<ans<<endl;
    return 0;
}
