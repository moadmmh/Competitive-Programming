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
#define LOG(x) std::cout << x << std::endl;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = acos(-1);

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

vector<int> ans;

int a[15];

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int b, p, f;
        cin >> b >> p >> f;
        int h, c;
        int ans = 0;
        cin >> h >> c;
        if (h > c)
        {
            while (b >= 2 and p)
            {
                if (b >= 2 and p)
                {
                    b -= 2;
                    p -= 1;
                    ans += h;
                }
                else
                    break;
            }
            while (b >= 2 and f)
            {
                if (b >= 2 and f)
                {
                    b -= 2;
                    f -= 1;
                    ans += c;
                }
                else
                    break;
            }
        }
        else
        {
            while (b >= 2 and f)
            {
                if (b >= 2 and f)
                {
                    b -= 2;
                    f -= 1;
                    ans += c;
                }
                else
                    break;
            }
            while (b >= 2 and p)
            {
                if (b >= 2 and p)
                {
                    b -= 2;
                    p -= 1;
                    ans += h;
                }
                else
                    break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
