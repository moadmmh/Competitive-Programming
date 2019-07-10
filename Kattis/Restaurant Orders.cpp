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

int n, m, cnt, curr;
int v[105];
int dp[105][30005];
int solve(int x, int rem)
{
    if (x >= n or rem < 0)
        return 0;
    if (rem == 0)
        return 1;

    int &ret = dp[x][rem];
    if (~ret)
        return ret;

    ret = 0;
    if (rem - v[x] >= 0)
        ret += solve(x, rem - v[x]);

    ret += solve(x + 1, rem);

    return ret;
}
void tracing(int x, int rem)
{
    int ret = dp[x][rem];
    for (int i = x; i < n; ++i)
    {
        if (ret == solve(i, rem - v[i]))
        {
            printf("%d", i + 1);
            printf(" ");
            tracing(i, rem - v[i]);
            return;
        }
    }
}
int main()
{
    sf(n);
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n; ++i)
        sf(v[i]);
    sf(m);
    while (m--)
    {
        sf(curr);
        cnt = solve(0, curr);
        if (cnt == 1)
        {
            tracing(0, curr);
            p();
        }
        else if (cnt == 0)
            cout << "Impossible" << endl;
        else
            cout << "Ambiguous" << endl;
    }
    return 0;
}
