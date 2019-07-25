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
#define F first
#define S second

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;

vector<pair<int, int>> grp[10005];
int dist[10005];

int main()
{
    int n, m, q, s;
    while (cin >> n >> m >> q >> s)
    {
        if (!n and !m and !q and !s)
            break;
        for (int i = 0; i < n; ++i)
            grp[i].clear();

        for (int i = 0; i < n; ++i)
            dist[i] = MAX;

        while (m--)
        {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            grp[u].pb(make_pair(v, w));
            //grp[v].pb(make_pair(u, w));
        }

        //SSSP
        priority_queue<pair<int, int>> pq;

        pq.push(make_pair(0, s));
        dist[s] = 0;
        while (!pq.empty())
        {
            pair<int, int> curr = pq.top();
            pq.pop();
            curr.F *= -1;
            for (auto n : grp[curr.S])
            {
                int v = n.F;
                int w = n.S;
                if (dist[v] > curr.F + w)
                {
                    dist[v] = curr.F + w;
                    pq.push(make_pair(-1 * dist[v], v));
                }
            }
        }
        while (q--)
        {
            int d;
            sf(d);
            if (dist[d] == MAX)
                cout << "Impossible" << endl;
            else
                cout << dist[d] << endl;
        }
        cout<<endl;
    }
    return 0;
}
