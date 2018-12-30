#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d\n", n)
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
map<pair<int,int>,int>mp;
int a[1005][2],b[1005][2];
vector<pair<int,int>>v;
int main() {
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    
    for(int i=0;i<n;++i){
        cin>>a[i][0]>>a[i][1];
    }
    for(int i=0;i<n;++i){
        cin>>b[i][0]>>b[i][1];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            v.pb(make_pair(a[i][0]+b[j][0],a[i][1]+b[j][1]));
            mp[make_pair(a[i][0]+b[j][0],a[i][1]+b[j][1])]+=1;
        }
    }
    for(int i=0;i<sz(v);++i){
        if(mp[v[i]]==n){
            cout<<v[i].first<<" "<<v[i].second<<endl;
            return 0;
        }
    }
    return 0;
}
