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

map<ll,ll>mp;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m;
    ll cnt=0;
    int x;
    while(sf(n),sf(m) and n and m){
        vector<int>a,b,ans;
        for(int i=0;i<n;++i) {
            sf(x);
            a.pb(x);
        }
        for(int i=0;i<m;++i) {
            sf(x);
            b.pb(x);
        }
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(ans));
        cout<<sz(ans)<<endl;
    }
    return 0;
}
