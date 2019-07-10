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
#define mod 1000 * 1000 * 1000 + 7
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
#define F first
#define S second

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;

pair<int, int> p[100005];

ll XOR(ll x)
{
    switch (x % 4)
    {
    case 0:
        return x;
    case 1:
        return 1;
    case 2:
        return x + 1;
    case 3:
        return 0;
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    n -= 1;
    ll ans = (XOR(m) ^ XOR(n));
    cout << ans << endl;
    return 0;
}
