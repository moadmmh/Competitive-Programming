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
int n,m;
int a[100005],b[100005],c[100005];
void bs(int x){
    int l=0,r=n,mid;
    while(l<r){
        mid=l+(r-l)/2;
        if(b[mid]>=x){
            r=mid;
        }
        else if(b[mid]<x){
            l=mid+1;
        }
    }
    cout<<r+1<<endl;
}

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    cin>>n;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    b[0]=a[0];
    for(int i=1;i<n;++i){
        b[i]=a[i]+b[i-1];
    }

    cin>>m;
    for(int i=0;i<m;++i){
        sf(c[i]);
    }
    for(int i=0;i<m;++i){
        bs(c[i]);
    }

    return 0;
}
