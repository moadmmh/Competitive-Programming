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
#define clr(x) x.clear()

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = acos(-1);

int a[2005][2005];
ll x[4005], y[4005], r[2], c[2];
ll m[2];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
            x[i + j] += a[i][j];
            y[n - 1 + j - i] += a[i][j];
        }
    }
    r[0] = 1;
    c[0] = 1;
    r[1] = 1;
    c[1] = 2;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ll curr = x[j + i] + y[n - 1 + j - i] - a[i][j];
            if (curr > m[(j + i) % 2])
            {
                m[(j + i) % 2] = curr;
                r[(j + i) % 2] = i + 1;
                c[(j + i) % 2] = j + 1;
            }
        }
    }
    cout << m[0] + m[1] << endl;
    cout << r[0] << " " << c[0] << " " << r[1] << " " << c[1] << endl;
    return 0;
}
