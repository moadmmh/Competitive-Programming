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

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b - c == d)
        return cout << "Yes" << endl, 0;
    if (a - b + c == d)
        return cout << "Yes" << endl, 0;
    if (a + (b *1LL* c) == d)
        return cout << "Yes" << endl, 0;
    if ((a *1LL* b) + c == d)
        return cout << "Yes" << endl, 0;
    if (a - (b *1LL* c) == d)
        return cout << "Yes" << endl, 0;
    if ((a *1LL* b) - c == d)
        return cout << "Yes" << endl, 0;
    cout << "No" << endl;
    return 0;
}
