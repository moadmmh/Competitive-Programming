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

vector<ll> v;

int main()
{
    //freopen("input.txt","r",stdin);
    int n, f, x, y;
    ll sum = 0;
    cin >> n >> f;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        sum += min(x, y);
        v.pb(min(2 * x, y) - min(x, y));
    }
    sort(all(v));
    while (f--)
    {
        sum += v.back();
        v.pop_back();
    }
    cout << sum << endl;
    return 0;
}