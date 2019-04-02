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

vector<int> v[1005];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        sf(x);
        v[0].pb(x);
    }
    int cnt = 0;
    ll sum = 0;
    while (true)
    {
        bool notequal = false;
        int tmp = v[cnt][sz(v[cnt])-1] - v[cnt][sz(v[cnt])-2];
        sum += tmp;
        for (int i = 1; i < sz(v[cnt]); ++i)
        {
            if (tmp != v[cnt][i] - v[cnt][i - 1])
            {
                notequal = true;
                break;
            }
        }
        if (notequal)
        {
            for (int i = 1; i < sz(v[cnt]); ++i)
            {
                v[cnt + 1].pb(v[cnt][i] - v[cnt][i - 1]);
            }
            cnt += 1;
        }
        else
        {
            return cout << cnt + 1 << " " << v[0][sz(v[0]) - 1] + sum << endl, 0;
        }
    }

    return 0;
}
