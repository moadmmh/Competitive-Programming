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

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
vector<int> grp[1000];
int vis[1000];

void dfs(int x)
{
    vis[x] = 1;
    for (auto v : grp[x])
    {
        if (!vis[v])
            dfs(v);
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int cnt = 0;
        memset(vis, 0, sizeof vis);
        for (int i = 0; i < 1000; ++i)
        {
            grp[i].clear();
        }
        int n, m;
        cin >> n >> m;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            grp[x].pb(y);
            grp[y].pb(x);
        }
        for (int i = 0; i < n; ++i)
        {
            if (!vis[i])
            {
                dfs(i);
                cnt += 1;
            }
        }
        cout << cnt - 1 << endl;
    }
    return 0;
}
