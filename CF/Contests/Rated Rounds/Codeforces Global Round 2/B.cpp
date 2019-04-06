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
int a[1005];
int n, h;
vector<int> v;
bool boleh()
{
    sort(all(v));
    ll x = 0;
    for (int i = sz(v) - 1; i >= 0; i -= 2)
    {
        x += v[i];
    }

    return x <= h;
}
int main()
{

    cin >> n >> h;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int cnt = 0;
    int currh = h;
    for (int i = 0; i < n; ++i)
    {
        v.pb(a[i]);
        if (boleh())
            cnt += 1;
        else
            return cout << cnt << endl, 0;
    }
    cout << n << endl;
    return 0;
}
