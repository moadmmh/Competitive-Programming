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
int a[25];
int main() {
    //freopen("input.txt","r",stdin);
    int n,aa,b,cost=0;
    cin>>n>>aa>>b;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n/2;++i){
        if(a[i]==a[n-1-i]){
            if(a[i]==2)
                cost+=min(2*aa,2*b);
        }
        else{
            if(a[i]!=a[n-i-1] and a[n-1-i]==2)
                cost+=(a[i]==0 ? aa : b);
            if(a[i]!=a[n-i-1] and a[i]==2)
                cost+=(a[n-1-i]==0 ? aa : b);
            else if(a[i]!=a[n-1-i] and a[i]!=2 and a[n-i-1]!=2) {
                return cout<<-1<<endl,0;
            }
        }
    }
    if(n&1 and a[(n+1)/2 - 1]==2){
        cost+=min(aa,b);
    }
    cout<<cost<<endl; 
    return 0;
}
