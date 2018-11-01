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
#define ex 1e12
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

int a[2005];
int n;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    cin>>n;

    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    int ans=0;
    //getting max depth (dfs)
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=i;j!=-1;j=a[j]){
            cnt+=1;
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}
