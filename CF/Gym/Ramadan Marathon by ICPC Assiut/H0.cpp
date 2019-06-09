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

int a[100005];
vector<int> v;
vector<int>::iterator ans;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        int x;
        sf(x);
        v.pb(x);
    }
    sort(all(v));

    while (m--)
    {
        int q;
        sf(q);
        ans = upper_bound(v.begin(), v.end(), 100000 - q);
        cout << (ans - v.begin()) << endl;
    }
    return 0;
}
