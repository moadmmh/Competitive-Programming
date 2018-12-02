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
int a[1005];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;++i){
        sf(a[i]);
        count+=(a[i]<0)?1:0;
    }
    printf("%d",count);

    return 0;
}
