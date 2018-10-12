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

int a[100005],b[100005],c[100005];
ll n,k;
bool check(int tmp){
    ull sum=0;
    for(int i=0;i<n;++i){
        sum+=(b[i]<(a[i]*1LL*tmp)?((a[i]*1LL*tmp)-b[i]*1LL):0);
    }
    if(sum<=k)
        return true;

    return false;
}
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);

    cin>>n>>k;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    for(int i=0;i<n;++i){
        sf(b[i]);
    }
    int maxi=0,mini=1000000000;
    for(int i=0;i<n;++i){
        mini=min(mini,(int)(k+b[i])/a[i]);
        maxi=max(maxi,(int)(k+b[i])/a[i]);
    }
    int l=0,r=maxi,mid=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(check(mid)){
            //cout<<mid<<endl;
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    cout<<r<<endl;
    return 0;
}
