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

int a[200005];

int main()
{
    int n;
    cin>>n;
    int zr=0,on=0;
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]==0)
            zr+=1;
        else
            on+=1;
    }
    for(int i=0;i<n;++i){
        if(on==0 or zr==0)
            return cout<<i<<endl,0;
        else {
            if(a[i]==0)
            zr-=1;
        else
            on-=1;
        }
    }
    cout<<n<<endl;
    return 0;
}
