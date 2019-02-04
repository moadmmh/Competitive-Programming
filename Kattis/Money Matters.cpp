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

ll sum = 0;
vector<int> v;
vector<int> grp[10005];
int vis[10005];
void dfs(int x)
{
    vis[x] = 1;
    sum += v[x];
    for (int i = 0; i < sz(grp[x]); ++i)
    {
        int y = grp[x][i];
        if (!vis[y])
            dfs(y);
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        grp[x].pb(y);
        grp[y].pb(x);
    }
    //dfs(0);
    bool boleh = true;
    for (int i = 0; i < n; ++i)
    {
        sum = 0;
        if (!vis[i])
            dfs(i);
        if (sum != 0)
        {
            boleh = false;
            break;
        }
    }
    cout << (boleh ? "POSSIBLE" : "IMPOSSIBLE") << endl;
    return 0;
}
