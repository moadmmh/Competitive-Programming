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

int main()
{
    int n, m;
    cin >> n >> m;
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        sf(x);
        sum1 += x;
    }
    for (int i = 0; i < m; ++i)
    {
        int x;
        sf(x);
        sum2 += x;
    }
    cout << (sum1 == sum2 ? "Yes" : "No") << endl;
    return 0;
}
