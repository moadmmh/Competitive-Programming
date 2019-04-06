#include <bits/stdc++.h>

using namespace std;
#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000000000
#define pi 3.1415926536
#define ex 1e18
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int a[3000005];
map<int,int>mp;
pair<int,int>pr[3000005];
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int maxi=a[n-1];
    //min
    int ans=0;
    for(int i=n-2;i>=0;--i){
        if(a[i]!=maxi){
            ans=n-1-i;
        }
    }
    for(int i=0;i<n;++i){
        if(a[i]!=a[0])
            ans=max(ans,i);
    }
    cout<<ans<<endl;
    return 0;
}
