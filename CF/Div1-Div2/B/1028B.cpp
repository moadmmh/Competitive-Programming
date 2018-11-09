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


int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,m;
    cin>>n>>m;
    int cnt1=1,cnt2=9;
    string a,b;
    bool reverse=false;
    while(cnt1<n or cnt2<n){
        a+=(!reverse?'8':'1');
        b+=(!reverse?'1':'8');
        reverse=!reverse;
        cnt1+=a[sz(a)-1]-'0';
        cnt2+=b[sz(b)-1]-'0';
    }
    //to make the result 10000...
    //so s(a+b)=1 always
    a+='1';
    b+='9';
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
