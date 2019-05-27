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
#define mod 1000 * 1000 * 100 + 7
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
ll a[33] = {2, 3, 6, 9, 18, 27};

void generate()
{
    bool ok = true;
    int prev = 1;
    for (int i = 0; i < 35; ++i)
    {
        if (ok)
        {
            a[i] = prev * 2;
        }
        else
        {
            a[i] = (prev * 3) / 2;
        }
        ok = !ok;
        prev = a[i];
    }
}

int main()
{
    int n;
    cin >> n;
    generate();
    cout << a[n - 1] << endl;

    return 0;
}
