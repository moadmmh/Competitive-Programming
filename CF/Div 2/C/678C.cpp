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
#define ex 1e9
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = lcm(a, b);
    ll ans = 0;
    if (x > n)
    {
        ans = p * 1LL * (n / a) + q * 1LL * (n / b);
        return cout << ans << endl, 0;
    }
    ans += p * 1LL * ((x / a) - 1);
    ans += q * 1L * ((x / b) - 1);
    ans = ans * 1LL * (n / x);
    ans += (n / x) * 1LL * max(p, q);
    ans += p * 1LL * ((n % x) / a);
    ans += q * 1LL * ((n % x) / b);

    cout << ans << endl;
    return 0;
}