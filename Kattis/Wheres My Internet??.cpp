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

int n, m;
int vis[200005];
vector<int> grp[200005];
void dfs(int x)
{
    vis[x] = 1;
    for (auto n : grp[x])
    {
        if (!vis[n])
            dfs(n);
    }
}

int main()
{
    bool found = false;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        sf(a);
        sf(b);
        grp[a].pb(b);
        grp[b].pb(a);
    }
    dfs(1);
    vis[1] = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            found = true;
            cout << i << endl;
        }
    }
    if (!found)
        cout << "Connected" << endl;
    return 0;
}
