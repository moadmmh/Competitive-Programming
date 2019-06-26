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

vector<int> grp[200005];
int leave[200005];
int vis[200005];
int rem[200005];
int tot[200005];

int main()
{
    int c, p, x, l;
    cin >> c >> p >> x >> l;
    while (p--)
    {
        int a, b;
        sf(a);
        sf(b);
        grp[a].pb(b);
        grp[b].pb(a);
        tot[a] += 1;
        rem[a] += 1;
        tot[b] += 1;
        rem[b] += 1;
    }
    queue<int> q;
    q.push(l);
    vis[l] = 1;
    while (!q.empty())
    {
        int z = q.front();

        q.pop();
        for (int i = 0; i < sz(grp[z]); ++i)
        {
            int y = grp[z][i];
            rem[y]--;

            if (!vis[y] and (rem[y] * 2 <= tot[y]))
            {
                q.push(y);
                vis[y] = 1;
            }
        }
    }
    cout << (vis[x] ? "leave" : "stay") << endl;

    return 0;
}
