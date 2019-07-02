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

int a[1000010];
int main()
{
    string s, a = "", b = "";
    int ca = 0, cb = 0;
    cin >> s;
    for (int i = 0; i < sz(s); ++i)
        a += char(((i + 1) % 2) + '0');
    for (int i = 0; i < sz(s); ++i)
    {
        b += char((i & 1) + '0');
    }

    for (int i = 0; i < sz(s); ++i)
    {
        if (a[i] != s[i])
            ca += 1;
        if (b[i] != s[i])
            cb += 1;
    }
    cout << min(ca, cb) << endl;
    return 0;
}
