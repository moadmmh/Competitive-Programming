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
map<int,int>mpx,mpy;
map<pair<int,int>,int>mp_pairs;
vector<pair<int,int>>v;
set<pair<int,int>>st;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
     int n;
     cin>>n;
     while(n--){
         int x,y;
         sf(x);sf(y);
         mpx[x]+=1;    mpy[y]+=1;
         v.pb(make_pair(x,y));   st.insert(make_pair(x,y));
         mp_pairs[make_pair(x,y)]+=1;
     }
     ll ans=0;
     for(int i=0;i<sz(v);++i){
        ans+=mpx[v[i].first]-1;
        ans+=mpy[v[i].second]-1;
        ans-=(mp_pairs[v[i]]-1);
     }
     //ans-=(sz(v)-sz(st));
     cout<<ans/2<<endl;
    return 0;
}
