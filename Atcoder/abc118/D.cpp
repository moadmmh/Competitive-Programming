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
string ans = "";
int a[10];
int aa[10];
int c[10] = {0, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int dp[10005];
int n, m;
int solve(int rem)
{
    if (rem < 0)
        return -INF;
    if (rem == 0)
        return 0;
    int &ret = dp[rem];
    if (ret != -1)
        return ret;
    for (int i = 0; i < m; ++i)
    {
        ret = max(ret, 1 + solve(rem - c[a[i]]));
    }
    return ret;
}
void trace(int rem)
{
    if (rem == 0)
        return;
    int &ret = dp[rem];
    for (int i = 0; i < m; ++i)
    {
        if (ret == solve(rem - c[a[i]]) + 1)
        {
            ans = ans + char(a[i] + '0');
            trace(rem - c[a[i]]);
            return;
        }
    }
    return;
}

int main()
{
    memset(dp, -1, sizeof dp);
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + m, greater<int>());
    solve(n);
    trace(n);
    sort(all(ans));
    for (int i = sz(ans) - 1; i >= 0; --i)
        cout << ans[i];
    p();
    return 0;
}
