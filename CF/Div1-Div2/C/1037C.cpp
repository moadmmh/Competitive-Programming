#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p() 	printf("\n")
#define ps() 	printf(" ")
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
vector<int>zeros,ones;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    ll cnt1=0,cnt2=0;
    cin>>n;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<n;++i){
        if(s[i]!=t[i])
            cnt2+=1;
    }

    for(int i=0;i<n;++i){
        if(s[i]!=t[i] and s[i+1]!=t[i+1] and s[i]!=s[i+1]){
            cnt1+=1;
            swap(s[i],s[i+1]);
        }
    }
    cout<<cnt2-cnt1<<endl;
    return 0;
}
