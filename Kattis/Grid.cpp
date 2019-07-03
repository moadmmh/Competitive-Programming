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
#define fir first
#define sec second

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;

char a[505][505];
int dist[505][505];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    }
    queue<pair<int, int>> q;
    dist[0][0] = 0;
    q.push(make_pair(0, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            dist[i][j] = INF;
    }
    dist[0][0] = 0;
    //cout<<dist[0][0]<<"--->"<<endl;
    while (!q.empty())
    {
        pair<int, int> x = q.front();
        q.pop();
        //cout << x.fir << " " << x.sec << endl;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x.fir + int(a[x.fir][x.sec] - '0') * dx[i];
            int ny = x.sec + int(a[x.fir][x.sec] - '0') * dy[i];

            if (nx < 0 or ny < 0 or nx >= n or ny >= m)
                continue;
            // cout<<nx<<" "<<ny<<endl;
            //cout<<(dist[nx][ny] > dist[x.fir][x.sec] + 1)<<endl;
            if (dist[nx][ny] > dist[x.fir][x.sec] + 1)
            {
                dist[nx][ny] = dist[x.fir][x.sec] + 1;
                q.push(make_pair(nx, ny));
                //cout<<nx<<" "<<ny<<endl;
            }
        }
    }
    if (dist[n - 1][m - 1] == INF)
        return cout << -1 << endl, 0;
    else
        cout << dist[n - 1][m - 1] << endl;
    return 0;
}
