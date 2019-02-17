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
vector<ll> v;
ll strtoll(string s)
{
    ll res = 0;
    for (int i = 0; i < sz(s); ++i)
    {
        res = res * 10 + (s[i] - '0');
    }
    return res;
}
void generate(string s)
{
    if (sz(s) == 11)
        return;
    if (s != "")
    {
        v.pb(strtoll(s));
    }
    generate(s + '4');
    generate(s + '7');
}
int main()
{
    //freopen("input.txt","r",stdin);
    int l, r;
    cin >> l >> r;
    generate("");
    sort(all(v));
    ll ans = 0;
    for (int i = 0; i < sz(v); ++i)
    {
        if (v[i] >= l and v[i] <= r)
        {
            ans += (v[i] - l + 1) * 1LL * v[i];
            l = v[i] + 1;
        }
        else if (v[i] >= r)
        {
            ans += (r - l + 1) * 1LL * v[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}