#include <bits/stdc++.h>

using namespace std;
#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 2e9
#define mod 1000000000
#define pi 3.1415926536
#define ex 1e18
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
int ht[2005][2005];
int vis[2005];
vector<int> grp[100005];
vector<int> v;
bool check()
{
    for (int i = 0; i < sz(v); ++i)
    {
        for (int j = i + 1; j < sz(v); ++j)
        {
            if (ht[v[i]][v[j]] == 1)
                return false;
        }
    }

    return true;
}

void dfs(int x)
{
    vis[x] = 1;
    v.pb(x);
    for (int i = 0; i < sz(grp[x]); ++i)
    {
        int tmp = grp[x][i];
        if (!vis[tmp])
        {
            dfs(tmp);
        }
    }
    return;
}
int main()
{
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
    int n;
    cin >> n;
    int k;
    cin >> k;
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        grp[a].pb(b);
        grp[b].pb(a);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        ht[a][b] = 1;
        ht[b][a] = 1;
    }
    int ans=0;
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            v.clear();
            dfs(i);
            if (check())
            {
                ans = max(ans, sz(v));
            }
        }
    }
    cout << ans << endl;
    return 0;
}
