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
vector<int>v;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,B;
    cin>>n>>B;
    if(n&1){
        return pf(0),0;
    }
    int ev=0,od=0;
    for(int i=0;i<n;++i){
        sf(a[i]);
        if(a[i]&1)ev+=1;
        else od+=1;
    }
    if(ev!=od){
        return pf(0),0;
    }
    ev=0,od=0;
    for(int i=0;i<n;++i){
        if(i!=0 and i%2==0 and ev==od){
            v.pb(abs(a[i]-a[i-1]));
        }
        if(a[i]&1)
            od+=1;
        else
            ev+=1;
    }
    sort(all(v));
    int cnt=0;
    for(int i=0;i<sz(v);++i){
        if(v[i]<=B){
            cnt+=1;
            B-=v[i];
        }
        else
            break;
    }
    cout<<cnt<<endl;
    return 0;
}
