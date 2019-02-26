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

set<int> nbrs;
map<int, int> r, l, both;
int main()
{
    //freopen("input.txt","r",stdin);
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        l[a] += 1;
        r[b] += 1;
        if (a == b)
            both[a] += 1;
        nbrs.insert(a);
        nbrs.insert(b);
    }
    int ans = MAX;
    int tmp = 0;
    for (auto it = nbrs.begin(); it != nbrs.end(); ++it)
    {
        int x = l[*it];
        int y = r[*it];
        if (x >= (n + 1) / 2)
        {
            return cout << 0 << endl, 0;
        }
        if ((y - both[*it] + x) >= (n + 1) / 2)
        {
            tmp = *it;
            ans = min(ans, (n + 1) / 2 - x);
        }
    }

    cout << (ans != MAX ? ans : -1) << endl;
    return 0;
}