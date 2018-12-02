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

vector<int>v,ans;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x; sf(x);
        v.pb(x);
    }
    sort(all(v));
    int en=0,st=0,refr=0;
    for(int i=0,j;i<n;++i){
        bool found=false;
        st=v[i];
        for( j=2;j<=n-i;++j){
            if(v[i]+j==v[i+j]){
                found=true;
                en=v[i+j];
                refr=i+j;
            }
            else
                break;
        }
        if(found){
            ans.pb(st);
            ans.pb(-1);
            ans.pb(en);
            i=refr;
        }
        else {
            ans.pb(st);
        }
    }

    for(int i=0;i<sz(ans)-1;++i){
        if(ans[i]==-1){
            cout<<"-";
        }
        else if(ans[i+1]==-1){
            cout<<ans[i];
        }
        else{
            cout<<ans[i]<<" ";
        }
    }
    cout<<ans[sz(ans)-1]<<endl;
    return 0;
}
