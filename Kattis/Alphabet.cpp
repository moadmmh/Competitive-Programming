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

int lis[1005];

int main()
{
    string s;
    cin >> s;
    //memset(lis, 0x1, sizeof lis);
    for (int i = 0; i < sz(s); ++i)
        lis[i] = 1;
    lis[0] = 1;
    for (int i = 1; i < sz(s); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (lis[i] < lis[j] + 1 and s[i] > s[j])
                lis[i] = lis[j] + 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < sz(s); ++i)
    {
        ans = max(ans, lis[i]);
    }
    cout << 26 - ans << endl;
    return 0;
}
