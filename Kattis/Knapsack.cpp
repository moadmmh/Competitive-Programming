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
int v[2005], w[2005];
int dp[2005][2005];
vector<int> ans;
int n, c;

int knapsack(int x, int rem)
{
    //cout << x << " " << rem << endl;
    if (rem < 0)
        return -INF;
    if (rem == 0 or x == n)
        return 0;
    int &ret = dp[x][rem];
    if (~ret)
        return ret;

    ret = max(knapsack(x + 1, rem), v[x] + knapsack(x + 1, rem - w[x]));
    return ret;
}

void tracing(int x, int rem)
{
    int ret = dp[x][rem];

    for (int i = x; i < n; ++i)
    {
        if (ret == (v[i] + knapsack(i + 1, rem - w[i])))
        {
            ans.pb(i);
            //cout<<i<<" "<<w[i]<<"->>>"<<ret<<endl;
            tracing(i + 1, rem - w[i]);
            return;
        }
    }
}
int main()
{
    while (cin >> c >> n)
    {
        memset(dp, -1, sizeof dp);
        ans.clear();
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i] >> w[i];
        }
        knapsack(0, c);
        tracing(0, c);
        cout << sz(ans) << endl;
        for (int i = 0; i < sz(ans); ++i)
            cout << ans[i] << " ";
        p();
    }
    return 0;
}
