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

ll v[100005],u[100005];

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        sf(v[i]);
        u[i]=v[i];
    }
    sort(u+1,u+n+1);
    for(int i=2;i<=n;++i){
        v[i]+=v[i-1];
        u[i]+=u[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int t=0,l=0,r=0;
        cin>>t>>l>>r;
        if(t==1){
            cout<<v[r]-v[l-1]<<endl;
        }
        else {
            cout<<u[r]-u[l-1]<<endl;
        }
    }
    return 0;
}
