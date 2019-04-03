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
#define mod 1000000000
#define pi 3.1415926536
#define ex 1e18
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

char s[1005][10005];
int visited[1005][1005];

int n, m;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<pair<int, int>> v;
bool isvalid(int x, int y)
{
    return (x >= 0 and x < n and y >= 0 and y < m);
}
void dfs(int x, int y)
{
    visited[x][y] = 1;
    for (int i = 0; i < 4; ++i)
    {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if (isvalid(nx, ny) and !visited[nx][ny] and s[nx][ny] == '0')
        {
            dfs(nx, ny);
        }
    }
    return;
}
int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    ll cnt = 0, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i == 0 or j == 0 or i == n - 1 or j == m - 1)
            {
                if (s[i][j] == '0')
                    v.pb(make_pair(i, j));
            }
        }
    }
    for (int i = 0; i < sz(v); ++i)
    {
        if (!visited[v[i].first][v[i].second])
        {
            dfs(v[i].first, v[i].second);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cnt = 0;
            if (s[i][j] == '1')
            {
                //check left
                if (j - 1 >= 0 and s[i][j - 1] == '0' and visited[i][j - 1])
                    cnt += 1;
                //check right
                if (j + 1 < m and s[i][j + 1] == '0' and visited[i][j + 1])
                    cnt += 1;
                //check up
                if (i - 1 >= 0 and s[i - 1][j] == '0' and visited[i - 1][j])
                    cnt += 1;
                //check down
                if (i + 1 < n and s[i + 1][j] == '0' and visited[i + 1][j])
                    cnt += 1;
                //check edge
                if (i == 0)
                    cnt += 1;
                if (i == n - 1)
                    cnt += 1;
                if (j == 0)
                    cnt += 1;
                if (j == m - 1)
                    cnt += 1;
                //cout << i + 1 << "*" << j + 1 << "  " << cnt << endl;
            }

            sum += cnt;
        }
    }
    cout << sum << endl;
    return 0;
}
