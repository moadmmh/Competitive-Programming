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

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x;
        cin >> x;
        int rem = 0, nbr;
        int taken = 0;
        bool found = false;
        for (int i = 2; i <= 50000; ++i)
        {
            if ((i * (i - 1)) / 2 == x)
            {
                cout << "1";
                while (i--)
                    cout << "3";
                cout << "7";
                p();
                found = true;
                break;
            }
            if ((i * (i - 1)) / 2 > x)
            {
                taken = ((i - 2) * (i - 1)) / 2;
                nbr = i - 1;
                break;
            }
        }
        if (found)
            continue;
        rem = x - taken;
        cout << "1";
        cout << "33";
        nbr -= 2;
        while (rem--)
            cout << "7";
        while (nbr--)
            cout << "3";
        cout << "7";
        p();
    }
    return 0;
}
