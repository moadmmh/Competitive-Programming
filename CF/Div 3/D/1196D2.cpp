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
int a[200005], rx[200005], gx[200005], bx[200005];
 
string r = "RGB";
string g = "GBR";
string b = "BRG";
 
int main()
{
    int q;
    cin >> q;
    int n, k;
    string s;
    while (q--)
    {
        int n, k;
        cin >> n >> k;
        cin >> s;
        for (int i = 0; i < n; ++i)
        {
            rx[i] = 1;
            gx[i] = 1;
            bx[i] = 1;
        }
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == r[(i % 3)])
            {
                rx[i] = 0;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == g[i % 3])
                gx[i] = 0;
        }
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == b[i % 3])
                bx[i] = 0;
        }
        for (int i = 1; i < n; ++i)
        {
            rx[i] += rx[i - 1];
            gx[i] += gx[i - 1];
            bx[i] += bx[i - 1];
        }
        int ans = INF;
        for (int i = 0; i + k - 1 < n; ++i)
        {
            int curr = rx[i + k - 1];
            if (i > 0)
                curr -= rx[i - 1];
            ans = min(ans, curr);
            curr = gx[i + k - 1];
            if (i > 0)
                curr -= gx[i - 1];
            ans = min(ans, curr);
            curr = bx[i + k - 1];
            if (i > 0)
                curr -= bx[i - 1];
            ans = min(ans, curr);
        }
        cout << ans << endl;
    }
    return 0;
}
