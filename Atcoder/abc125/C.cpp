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

int a[100005], l[100005], r[100005];

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    l[0] = a[0];
    for (int i = 1; i < n; ++i)
        l[i] = gcd(a[i], l[i - 1]);
    r[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i)
        r[i] = gcd(a[i], r[i + 1]);

    int ans = 1;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
            ans = max(ans, r[i + 1]);
        else if (i == n - 1)
            ans = max(ans, l[i - 1]);
        else
            ans = max(ans, gcd(l[i - 1], r[i + 1]));
    }
    cout << ans << endl;
    return 0;
}
