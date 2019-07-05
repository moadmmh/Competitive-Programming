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
#define fir first
#define sec second

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;

int a[100005];
int main()
{
    int n, p;
    cin >> n >> p;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        a[i] -= p;
    }
    int sum = 0, ans = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        ans = max(ans, sum);
        if (sum < 0)
            sum = 0;
    }
    cout << ans << endl;
    return 0;
}