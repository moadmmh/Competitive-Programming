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

vector<pair<int, int>> grp[1005];
bool dist[1024][1024];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int u, v, c;
        cin >> u >> v >> c;
        grp[u].push_back({v, c});
        grp[v].push_back({u, c});
    }
    int st, en;
    cin >> st >> en;

    memset(dist, 0, sizeof dist);
    dist[st][0] = 1;
    queue<pair<ll, ll>> pq;
    pq.push({0, st});
    while (!pq.empty())
    {
        pair<int, int> curr = pq.front();
        pq.pop();
        for (auto nxt : grp[curr.second])
        {
            int v = nxt.first;
            int c = nxt.second;
            int nc = c | curr.first;
            if (!dist[v][nc])
            {
                //cout<<v<<" "<<nc<<endl;
                dist[v][nc] = true;
                pq.push(make_pair(nc, v));
            }
        }
    }
    for (int i = 0; i < 1024; ++i)
    {
        if (dist[en][i])
        {
            //cout<<en<<endl;
            return cout << i << endl, 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
