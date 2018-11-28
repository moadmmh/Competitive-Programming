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
vector<int>v;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    while(T--){
        v.clear();
        int n,m;
        cin>>n>>m;
        int y=m;
        while(y--){
            int x ;sf(x);
            v.pb(x);
        }
        int ans=0;
        ans=max(v[0],n-v[m-1]+1);
        for(int i=1;i<sz(v);++i){
                ans=max(ans,1+(v[i]-v[i-1])/2);
        }
        cout<<ans<<endl;
    }
    return 0;
} 
