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

queue<pair<int, int>> v;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int vis[2005][2005];

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    int xx = 0, yy = 0, ans = -1;
    cin >> n >> m;
    int k;
    cin >> k;
    memset(vis, -1, sizeof vis);
    for (int i = 0; i < k; ++i)
    {
        int x, y;
        cin >> x >> y;
        xx = x;
        yy = y;
        vis[x - 1][y - 1] = 0;
        v.push(make_pair(x - 1, y - 1));
    }

    while (!v.empty())
    {
        int x = v.front().first;
        int y = v.front().second;
        v.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 or nx >= n or ny < 0 or ny >= m)
                continue;
            if (vis[nx][ny] == -1)
            {
                vis[nx][ny] = vis[x][y] + 1;
                v.push(make_pair(nx, ny));
                if (vis[nx][ny] > ans)
                {
                    xx = nx + 1;
                    yy = ny + 1;
                    ans = vis[nx][ny];
                }
            }
        }
    }
    cout << xx << " " << yy << endl;
    return 0;
}
