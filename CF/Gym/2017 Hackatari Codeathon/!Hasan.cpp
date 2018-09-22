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

ll  maximum;


int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,x,y;
    cin>>n>>x>>y;
    maximum=n*1LL*max(x,y);
    ll l=0,r=0,mid=0;
    r=maximum;
    while(l<r){         //FFFTTT    (the minimum value is the first value after the last false value)
        mid=(l+r)/2;
        ll tmp=mid/x +mid/y;
        if(tmp>=n){//if the value satisfies the condition we keep it in the rang cuz it might be the least value
            r=mid;
        }
        else{    //if it doesn't we check the after it
            l=mid+1;
        }
    }
    cout<<r<<endl;
    return 0;
}
