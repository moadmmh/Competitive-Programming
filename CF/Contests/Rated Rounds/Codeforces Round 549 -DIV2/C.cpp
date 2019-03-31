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

int p[100005], c[100005], a[100005], x[100005];
vector<int> v;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        sf(p[i]);
        sf(c[i]);
        if (c[i] == 1)
        {
            a[i] = 1;
        }
        if (c[i] == 0 and p[i] != -1)
        {
            x[p[i]] = 1;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == 1 and x[i] == 0)
        {
            v.pb(i);
        }
    }
    if (sz(v) == 0)
    {
        return cout << -1 << endl, 0;
    }
    for (int i = 0; i < sz(v); ++i)
    {
        cout << v[i] << " ";
    }
    p();
    return 0;
}
