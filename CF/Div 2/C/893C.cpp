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

pair<int, int> pr[100005];
vector<int> grp[100005];
int vis[100005];
void dfs(int x)
{
    vis[x] = 1;
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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        int x;
        sf(x);
        pr[i].first = x;
        pr[i].second = i + 1;
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        grp[a].pb(b);
        grp[b].pb(a);
    }
    sort(pr, pr + n);
    ll cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (!vis[pr[i].second])
        {
            dfs(pr[i].second);
            cnt += pr[i].first;
        }
    }

    cout << cnt << endl;
    return 0;
}
