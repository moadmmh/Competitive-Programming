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

vector<pair<int, int>> grp[100005];
int vis[100005], ans[100005];

void dfs(int x, int clr)
{
    vis[x] = 1;
    ans[x] = clr;
    for (auto n : grp[x])
    {
        if (!vis[n.F])
        {
            if (n.S & 1)
                dfs(n.F, 1 - clr);
            else
                dfs(n.F, clr);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        grp[u].pb(make_pair(v, w));
        grp[v].pb(make_pair(u, w));
    }
    dfs(1, 0);
    for (int i = 1; i <= n; ++i)
        cout << ans[i] << endl;
    return 0;
}
