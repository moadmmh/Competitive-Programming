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
#define ex 1e18
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int a[100005], b[100005], c[100005];
map<int, int> mp1, mp2;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int curr1 = 0, curr2 = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (mp1[a[i]] == 0)
        {
            mp1[a[i]] = 1;
            curr1 += 1;
        }
        b[i] = curr1;
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (mp2[a[i]] == 0)
        {
            mp2[a[i]] = 1;
            curr2 += 1;
        }
        c[i] = curr2;
    }
    int ref = 0;
    ll ans = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (c[i] != ref)
        {
            ans += b[i - 1];
            ref = c[i];
        }
    }
    cout << ans << endl;
    return 0;
}