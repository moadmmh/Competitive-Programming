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

int a[105];
vector<int>X,Y;

void generate(int x){
    for(int i=1;i<=x;i+=2){
        X.pb(i);
    }
    for(int i=2;i<=x;i+=2){
        Y.pb(i);
    }
}
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,odd=0,even=0;
    cin>>n;
    generate(n);
    for(int i=0;i<n/2;++i){
        sf(a[i]);
        if(a[i]&1)
            odd+=1;
        else even+=1;
    }
    sort(a,a+n/2);
    if(odd==n/2 or even==n/2){
        cout<<0<<endl;
        return 0;
    }
    //black
    int cnt=0,cntt=0;
    for(int i=0;i<sz(X);++i){
        cnt+=abs(a[i]-X[i]);
    }
    //white
    for(int i=0;i<sz(Y);++i){
        cntt+=abs(a[i]-Y[i]);
    }
    cout<<min(cnt,cntt)<<endl;
    return 0;
}
