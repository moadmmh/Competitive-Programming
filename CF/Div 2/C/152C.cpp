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
#define clr(x) x.clear()

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = acos(-1);

map<string, int> mp;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;
    ll ans = 1;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    for (int i = 0; i < m; ++i)
    {
        set<char> tmp;
        for (int j = 0; j < n; ++j)
        {
            tmp.insert(v[j][i]);
        }
        ans *= tmp.size();
        ans %= mod;
    }
    cout << ans << endl;

    return 0;
}
