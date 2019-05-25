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

int n, m;
ll cnt = 0;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};
int a[1005][1005];
int vis[1005][1005];
void dfs(int x, int y)
{
    vis[x][y] = 1;
    cnt += 1;
    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (ny >= m or ny < 0 or nx >= n or nx < 0)
            continue;
        if (!vis[nx][ny] and a[x][y] == a[nx][ny])
            dfs(nx, ny);
    }
    return;
}

int main()
{
    cin >> n >> m;
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            sf(a[i][j]);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!vis[i][j])
            {
                cnt = 0;
                dfs(i, j);
                if (cnt > 2)
                    //cout<<cnt<<endl;
                    ans = max(ans, (cnt * 1LL * a[i][j]));
            }
        }
    }
    cout << ans << endl;
    return 0;
}
