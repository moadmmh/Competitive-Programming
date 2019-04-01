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

vector<int> v;

int main()
{
    int n, k;
    cin >> n >> k;
    if (n > k or k > (n * 26))
        return cout << "impossible" << endl, 0;
    int x = k / n;
    for (int i = 0; i < n; ++i)
    {
        v.pb(x);
    }
    if (x * n == k)
    {
        for (int i = 0; i < sz(v); ++i)
        {
            cout << char(v[i] - 1 + 'a');
        }
        p();
    }
    else
    {
        int rem = k - x * n;
        for (int i = 0; i < sz(v); ++i)
        {
            if (26 - v[i] < rem)
            {
                rem -= (26 - v[i]);
                v[i] = 26;
            }
            else
            {
                v[i] += rem;
                break;
            }
        }

        for (int i = 0; i < sz(v); ++i)
        {
            cout << char(v[i] - 1 + 'a');
        }
        p();
    }

    return 0;
}
