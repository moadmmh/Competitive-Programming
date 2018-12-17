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
int a[1005],b[1005];

int main() {
    //freopen("input.txt","r",stdin);
    int n,s;
    cin>>n>>s;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        cin>>b[i];
    }
    if(a[0]==0){
        return cout<<"NO"<<endl ,0;
    }
    if(a[s-1]==1){
        return cout<<"YES"<<endl,0;
    }
    if(a[s-1]==0 and b[s-1]==1){
        for(int i=n-1;i>s-1;--i){
            if(a[i]==1 and b[i]==1)
                return cout<<"YES"<<endl,0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
} 
