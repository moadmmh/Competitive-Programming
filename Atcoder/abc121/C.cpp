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

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i].F >> p[i].S;
    }
    sort(p, p + n);
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (m >= p[i].S)
        {
            ans += p[i].F *1LL* p[i].S;
            m -= p[i].S;
        }
        else if (m > 0 and m < p[i].S)
        {
            ans += p[i].F *1LL* m;
            m = 0;
        }
        if (m == 0)
            break;
    }
    cout << ans << endl;
    return 0;
}
