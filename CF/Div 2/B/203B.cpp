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
int row[1005], col[1005];
int a[1005][1005];

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    cin >> n >> m;
    if (n < 3)
        return cout << -1 << endl, 0;
    if (n == 3)
    {
        if (m < 9)
            return cout << -1 << endl, 0;
        else
            return cout << 9 << endl, 0;
    }
    int cnt = 0;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        cnt += 1;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                a[x + i][y + j] += 1;
                if (a[x + i][y + j] == 9)
                    return cout << cnt << endl, 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}