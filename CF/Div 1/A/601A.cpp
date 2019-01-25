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

int grp1[402][402], grp2[402][402];
int vis[405];
int taken[401][401];
int main()
{
    //freopen("input.txt","r",stdin);
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> x >> y;
        grp1[x][y] = 1;
        grp1[y][x] = 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i != j and grp1[i][j] == 0)
            {
                grp2[i][j] = 1;
                grp2[j][i] = 1;
            }
        }
    }
    memset(vis, 0x3f, sizeof vis);
    vis[1] = 0;
    queue<int> q;
    q.push(1);
    if (grp1[1][n])
    {
        //bfs in the sec grp
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            for (int i = 1; i <= n; ++i)
            {
                if (x != i and grp2[x][i] and !taken[x][i] and !taken[i][x])
                {
                    if (vis[i] > vis[x] + 1)
                    {
                        vis[i] = vis[x] + 1;
                        taken[x][i] = 1;
                        taken[i][x] = 1;
                        q.push(i);
                    }
                }
            }
        }
        cout << (vis[n] < n ? vis[n] : -1) << endl;
    }
    else
    {
        //bfs in the fst grp
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            for (int i = 1; i <= n; ++i)
            {
                if (x != i and grp1[x][i] and !taken[x][i] and !taken[i][x])
                {
                    if (vis[i] > vis[x] + 1)
                    {
                        vis[i] = vis[x] + 1;
                        taken[x][i] = 1;
                        taken[i][x] = 1;
                        q.push(i);
                    }
                }
            }
        }
        cout << (vis[n] < n ? vis[n] : -1) << endl;
    }
    return 0;
}
