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


int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    ll n,m;
    cin>>n>>m;
    if(m==0){
        cout<<n<<" "<<n<<endl;
        return 0;
    }
    ll mini,maxi;
    mini=(2*m>=n?0:n-(2*m));
    ll rem=m,cnt=1,refr;
    while(rem>0){
        refr=min(rem,cnt);
        rem-=refr;
        cnt+=1;
    }
    maxi=n;
    if(cnt>1)
        maxi=n-cnt;
    cout<<mini<<" "<<maxi<<endl;

    return 0;
}
