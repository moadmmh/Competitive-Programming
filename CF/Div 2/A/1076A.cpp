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
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    string s;
    int n;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;++i){
        if(s[i]>s[i+1]){
            s.erase(i,1);
            cout<<s<<endl;
            return 0;
        }
    }
    if(n>1){
        s=s.substr(0,n-1);
    }
    cout<<s<<endl;
    return 0;
}
