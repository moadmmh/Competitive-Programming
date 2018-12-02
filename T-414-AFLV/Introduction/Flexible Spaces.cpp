#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p()     printf("\n")
#define ps()    printf(" ")
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
int a[105];
vector<int>v;
map<int,int>mp;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int w,p;
    cin>>w>>p;
    v.pb(w);
    for(int i=0;i<p;++i){
        cin>>a[i];
        v.pb(a[i]);
        mp[a[i]]=1;
    }
    for(int i=0;i<p;++i){

        if(!mp[w-a[i]]){
            v.pb(w-a[i]);
            mp[w-a[i]]=1;
        }
        for(int j=i+1;j<p;++j){
            if(!mp[a[j]-a[i]]){
                mp[a[j]-a[i]]=1;
                v.pb(a[j]-a[i]);
            }
        }
    }
    sort(all(v));
    for(int i=0;i<sz(v);++i){
        cout<<v[i]<<" ";
    }
    p();
    return 0;
}
