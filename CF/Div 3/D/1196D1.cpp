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
#define F first
#define S second
#define clr(x) x.clear()
 
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
 
vector<int> v;
int a[200005];
string ext = "RGB";
 
int main()
{
    int q;
    cin >> q;
    int n, k;
    string s;
    while (q--)
    {
        int ans = INF;
        bool found = false;
        scanf("%d%d", &n, &k);
        cin >> s;
        for (int i = 0; i < n - k + 1; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                int cnt = 0;
                for (int x = 0; x < k; ++x)
                {
                    if (s[i + x] != ext[(x + j) % 3])
                        ++cnt;
                }
                ans = min(ans, cnt);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
