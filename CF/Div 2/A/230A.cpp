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

pair<int,int>a[10005];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int s,m;
    cin>>s>>m;
    for(int i=0;i<m;++i){
        sf(a[i].first);sf(a[i].second);
    }
    sort(a,a+m);
    for(int i=0;i<m;++i){
        if(a[i].first>=s){
            cout<<"NO"<<endl;
            return 0;
        }
        s+=a[i].second;
    }
    cout<<"YES"<<endl;
    return 0;
}
