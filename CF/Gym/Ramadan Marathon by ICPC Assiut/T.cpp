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

vector<int> grp[1005];
vector<int> dummy[1005];
int vis[1005][1005];
void dfs(int frm, int x)
{

    if (frm != x)
    {
        dummy[frm].pb(x);
        vis[frm][x] = 1;
    }
    for (int i = 0; i < sz(grp[x]); ++i)
    {
        int y = grp[x][i];
        if (!vis[frm][y])
            dfs(frm, y);
    }
    return;
}
int main()
{
    int n, m;
    sf(n);
    sf(m);
    while (m--)
    {
        int u, v;
        sf(u);
        sf(v);
        grp[u].pb(v);
    }
    for (int i = 1; i <= n; ++i)
    {
        dfs(i, i);
    }
    int q;
    sf(q);
    while (q--)
    {
        int u, v;
        sf(u);
        sf(v);
        if (vis[u][v])
            printf("YES");
        else
        {
            printf("NO");
        }
        p();
    }
    return 0;
}
