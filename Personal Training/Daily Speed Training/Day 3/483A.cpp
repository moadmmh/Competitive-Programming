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
ll gcd(ll a , ll b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int main() {
    //freopen("input.txt","r",stdin);
    ll l,r;
    cin>>l>>r;
    if(r-l==1){
        return cout<<-1<<endl,0;
    }
    if(l%2==0 and l+2<=r){
        cout<<l<<" "<<l+1<<" "<<l+2<<endl; 
        return 0;
    }
    if(l&1 and l+3<=r){
        cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        return 0;
    }
    if(l&1){
        if(gcd(l,l+2)>1){
            cout<<l<<" "<<l+1<<" "<<l+2<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
