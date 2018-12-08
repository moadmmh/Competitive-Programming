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
int n,m;
vector<set<int>>grp;
int a[100005];
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout); 
    cin>>n>>m;
    grp.resize(100000+5);
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    int c,b;
    for(int i=0;i<m;++i){
        cin>>c>>b;
        if(a[b]!=a[c]){    
            grp[a[c]].insert(a[b]);
            grp[a[b]].insert(a[c]);
        }
    }
    int ans=0;
    int clr=100005;
    for(int i=1;i<=n;++i){
            if(ans==grp[a[i]].size()){
                clr=min(clr,a[i]);
            }
            else if(ans<grp[a[i]].size()){
                ans=grp[a[i]].size();
                clr=a[i];
            }
    }
    
    cout<<clr<<endl;
    return 0;
}
