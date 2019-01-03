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
vector<int>a,b;
int main() {
    //freopen("input.txt","r",stdin);
    int T;
    cin>>T;
    int cnt=1;
    while(T--){
        int x,tmp;
        sf(x);
        a.clear();
        b.clear();
        for(int i=0;i<x;++i){
            sf(tmp);
            a.pb(tmp);
        }
        for(int i=0;i<x;++i){
            sf(tmp);
            b.pb(tmp);
        }
        sort(all(a));
        sort(all(b));
        ll ans=0;
        for(int i=0;i<x;++i){
            ans+=(a[i]*1LL*b[x-1-i]);
        }
        cout<<"Case #"<<cnt<<": "<<ans<<endl;
        cnt+=1;
    }
    return 0;
}
