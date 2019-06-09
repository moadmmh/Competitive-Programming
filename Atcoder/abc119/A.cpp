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
    string s;
    cin >> s;
    string yr = s.substr(0, 4), mnth = s.substr(5, 2), day = s.substr(8, 2);
    int y = 0, m = 0, d = 0;

    for (int i = 0; i < sz(yr); ++i)
        y = y * 10 + (yr[i] - '0');

    for (int i = 0; i < sz(mnth); ++i)
        m = m * 10 + (mnth[i] - '0');

    for (int i = 0; i < sz(day); ++i)
        d = d * 10 + (day[i] - '0');
    if (y < 2019)
        return cout << "Heisei" << endl, 0;
    if (y == 2019)
    {
        if (m < 4)
            return cout << "Heisei" << endl, 0;
        else if (m == 4 and d <= 30)
            return cout << "Heisei" << endl, 0;
    }

    return cout << "TBD" << endl, 0;

    return 0;
}
