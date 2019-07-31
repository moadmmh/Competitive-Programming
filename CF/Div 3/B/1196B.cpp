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
 
vector<int>v;
int a[200005];
 
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        clr(v);
        int n, k;
        scanf("%d%d", &n, &k);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 1)
                v.pb(i + 1);
        }
        if (sz(v) < k or ((sz(v) - k) % 2 == 1))
        {
            cout << "NO" << endl;
            continue;
        }
        else if ((sz(v) - k) % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k-1; ++i)
                cout << v[i] << " ";
            cout<<n<<endl;
            //p();
        }
    }
    return 0;
}
