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

int n, m;
vector<pair<int, int>> adj[100005];
long long dist[100005];
int par[100005];

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i)
    {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    priority_queue<pair<int, long long>> pq;
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    pq.push({1, dist[1]});
    while (!pq.empty())
    {
        pair<int, ll> cur = pq.top();
        pq.pop();
        cur.second *= -1;
        if (cur.second > dist[cur.first])
            continue;
        for (auto nxt : adj[cur.first])
        {
            int v = nxt.first;
            int w = nxt.second;
            if (dist[v] <= dist[cur.first] + w)
                continue;
            dist[v] = dist[cur.first] + w;
            par[v] = cur.first;
            pq.push({v, -1 * dist[v]});
        }
    }
    if (dist[n] > 100000000001LL)
    {
        return cout << -1 << endl, 0;
    }

    stack<int> path;
    int me = n;
    while (me)
    {
        path.push(me);
        me = par[me];
    }
    while (!path.empty())
    {
        cout << path.top() << " ";
        path.pop();
    }
    cout << endl;
    return 0;
}
