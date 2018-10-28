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
map<int,int>mp;
vector<pair<int,int>>v;
set<int>st;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
     int n;
     cin>>n;
     for(int i=0;i<n;++i){
         int x;
         sf(x);  st.insert(x);
         mp[x]+=1;
     }
     for(auto i=st.begin();i!=st.end();++i){
        int x=*i;
        v.pb(make_pair(x,mp[x]));
     }
     int cnt,anothercnt=0,ans=0;
     sort(all(v));
     while(anothercnt<n) {
         cnt=0;
         for (int i = 0; i < sz(v); ++i) {
             if (v[i].second > 0) {
                 cnt += 1;
                 v[i].second-=1;
                 anothercnt++;
             }
         }
         ans+=(cnt-1);
     }
     cout<<ans<<endl;
    return 0;
}
