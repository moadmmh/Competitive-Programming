#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d\n", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000000000
#define pi 3.1415926536
#define ex 1e9
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) (int)s.length()
#define sz(x) (int)x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

char a[105][105];
int vis[105][105];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m;

bool valid(int x, int y)
{
    if (x >= 0 and x < n and y >= 0 and y < m)
        return true;
    return false;
}

void dfs(int x, int y)
{
    vis[x][y] = 1;
    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (valid(nx, ny) and !vis[nx][ny] and a[nx][ny] == '-')
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int cs = 1;

    while (cin >> n >> m)
    {
        int cnt = 0;
        memset(vis, 0, sizeof vis);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        //cout<<"here"<<endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (a[i][j] == '-' and !vis[i][j])
                {

                    dfs(i, j);
                    cnt += 1;
                }
            }
        }
        cout << "Case " << cs << ": " << cnt << endl;
        cs += 1;
    }
    return 0;
}
