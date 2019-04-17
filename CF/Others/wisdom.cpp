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
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

ll T, n, m, k;
vector<pair<ll, pair<ll, ll>>> grp[100005];
ll dist[100005];
void dijkstra(ll x)
{ //x -> curr mid
    memset(dist, 0x3f, sizeof dist);
    priority_queue<pair<ll, ll>> pq;
    dist[1] = 0;
    pq.push({dist[1], 1});
    while (!pq.empty())
    {

        pair<ll, ll> cur = pq.top();
        pq.pop();
        cur.first = -1 * 1LL * cur.first;
        if (cur.first > dist[cur.second])
            continue;
        for (auto nxt : grp[cur.second])
        {
            ll v = nxt.first;
            ll w = nxt.second.second;
            ll c = nxt.second.first;
            if (w > x)
                continue;
            if(dist[v]>dist[cur.second]+c){
                dist[v]=dist[cur.second]+c;
                pq.push({-1 *1LL* dist[v],v});
            }
        }
    }
}
int main()
{
    cin >> T;
    while (T--)
    {
        for (int i = 0; i < 100005; ++i)
            grp[i].clear();
        cin >> n >> m >> k;
        for (int i = 0; i < m; ++i)
        {
            int u, v, c, w;
            cin >> u >> v >> c >> w;
            grp[u].push_back({v, {c, w}});
            grp[v].push_back({u, {c, w}});
        }
        ll l, r, mid;
        l = 0;
        r = 100000000000001LL;
        ll ans = 100000000000001LL;
        while (l < r)
        {
            mid = (((r - l ) / 2) + l);
            dijkstra(mid);
            if (dist[n] < k)
            {
                ans = mid;
                r = mid ;
            }
            else
            {
                l = mid + 1 ;
            }
        }
        cout << (ans == 100000000000001LL ? -1 : ans) << endl;
    }
    return 0;
}
