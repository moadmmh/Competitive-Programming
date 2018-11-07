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

vector<ll>v;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    ll b,d,s;
    cin>>b>>d>>s;
    ll ans=0;
    
    //came after breakfast
    if (d==max(d,max(b,s))){
        ans=(abs(d-s)>1?(abs(d-s)-1):0)+(abs(d-b)>1?(abs(d-b)-1):0);
        v.pb(ans);
    }
    if (s==max(d,max(b,s))){
        ans=abs(s-d)+abs(s-b);

        v.pb(ans);
    }
    if (b==max(d,max(b,s))){
        ans=abs(b-d)+abs(b-s);
        v.pb(ans);
    }

    //came after lunch
    if (d==max(d,max(b,s))){
        ans=abs(d-s)+abs(d-b);
        v.pb(ans);
    }
    if (s==max(d,max(b,s))){
        ans=(abs(s-b)>1?(abs(s-b)-1):0)+(abs(s-d)>1?(abs(s-d)-1):0);
        v.pb(ans);
    }
    if (b==max(d,max(b,s))){
        ans=(abs(b-s)>1?(abs(b-s)):0)+(abs(b-d)>1?(abs(b-d)):0);
        v.pb(ans);
    }

    //came after dinner
    if (d==max(d,max(b,s))){
        ans=(abs(d-b))+(abs(d-s)>1?(abs(d-s)-1):0);
        v.pb(ans);
    }
    if (s==max(d,max(b,s))){
        ans=abs(s-b)+abs(s-d);
        v.pb(ans);
    }
    if (b==max(d,max(b,s))){
        ans=(abs(b-s)>1?(abs(b-s)-1):0)+(abs(b-d)>1?(abs(b-d)-1):0);
        v.pb(ans);
    }

    sort(all(v));
    cout<<v[0]<<endl;
    return 0;
}
