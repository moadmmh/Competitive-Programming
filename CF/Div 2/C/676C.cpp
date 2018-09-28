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
    int n,k,res=0;
    cin>>n>>k;
    string s;
    cin>>s;

    int l=0,r=0,a=0,b=0;
    //for 'a'
    while(r<n){
        if(s[r]=='b')b++;
        if(b<=k){
            res=max(res,r-l+1);
        }
        while(b>k){
            if(s[l]=='b')b-=1;
            l+=1;
        }
        r+=1;
    }
    //for 'b'
    l=0;
    r=0;
    while(r<n){
        if(s[r]=='a')a++;
        if(a<=k){
            res=max(res,r-l+1);
        }
        while(a>k){
            if(s[l]=='a')a-=1;
            l+=1;
        }
        r+=1;
    }
    cout<<res<<endl;
    return 0;
}
