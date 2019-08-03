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
 
map<string, int> mp;
 
int main()
{
    int n;
    cin >> n;
    string s;
    //n=7x+4y
    int x = 0, y = 0;
    for (int i = 0; i * 7 <= n; ++i)
    {
        if ((n - (i * 7)) % 4 == 0 and ((n - (i * 7)) / 4) >= 0)
        {
            x = i;
            y = (n - (i * 7)) / 4;
        }
    }
    if (!x and !y)
        return cout << -1 << endl, 0;
 
    while (y--)
        s += "4";
    while (x--)
        s += "7";
    cout << s << endl;
    return 0;
}
