#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p() 	printf("\n")
#define ps() 	printf(" ")
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

bool isprime(ll n){
    for(int i=2;i*i<=n;++i){
        if(n%i==0)
            return false;
    }
    return true;
}
ll get(ll n){
    for(ll i=3;i*i<=n;i++){
        if(n%i==0)
            return i;
    }
    return n;
}
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
        return 0;
    }
    else{
        cout<<1+(n-get(n))/2<<endl;
    }
    return 0;
}
