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


int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    n%=4;
    if(n==0){
        return pf(0),0;
    }
    ll x=4-n;
    if(x==1){
        cout<<min(min(a,b+c),3*c)<<endl;
    }
    else if (x==2){
        cout<<min(2*a,min(b,2*c))<<endl;
    }
    else {
        cout<<min(3*a,min(c,a+b))<<endl;
    }
    return 0;
}
