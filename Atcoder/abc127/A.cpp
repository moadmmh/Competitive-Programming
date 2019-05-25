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
#define mod 1000 * 1000 * 100 + 7
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

int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
int a[1005][1005];
vector<pair<int,int>>v;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a<=5)
        cout<<0<<endl;
    else if(a>=6 and a<=12)
        cout<<b/2<<endl;
    else
        cout<<b<<endl;
    return 0;
}
