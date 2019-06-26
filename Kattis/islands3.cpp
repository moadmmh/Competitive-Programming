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
char a[55][55];
int x, y;

int vis[55][55];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y)
{
    vis[x][y] = 1;
    for (int i = 0; i < 4; ++i)
    {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if (ny < 0 or ny >= m or nx < 0 or nx >= n)
            continue;
        if (!vis[nx][ny] and a[nx][ny] != 'W')
            dfs(nx, ny);
    }
}
int main()
{
    cin >> n >> m;
    bool w = false, l = false;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == 'W')
                w = true;
            if (a[i][j]=='L')
                l = true;
        }
    }
    /*if (!l or !w)
    {
        return cout << 0 << endl, 0;
    }*/
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!vis[i][j] and a[i][j] == 'L')
            {
                dfs(i, j);
                cnt += 1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
