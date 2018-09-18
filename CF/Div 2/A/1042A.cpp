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
int a[105];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    sort(a,a+n);
    int x=m;
    for(int i=0;i<n-1;++i){
        m-=a[n-1]-a[i];
    }
    int mini,maxi;
    maxi=a[n-1]+x;
    mini=(m<=0 ? a[n-1] : (a[n-1]+ m/n +(m%n==0 ?0:1)));
    cout<<mini<<" "<<maxi<<endl;
    return 0;
}
