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
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int a[100005],b[100005];

int main()
{
    int n,d;
    cin>>n>>d;
    for(int i=0;i<n;++i){
        cin>>a[i];
        //b[i]=a[i];
    }
    for(int i=0;i<n;++i){
        b[((i-d)+n)%n]=a[i];
    }
    for(int i=0;i<n;++i)
        cout<<b[i]<<" ";
    p();
    return 0;
}
