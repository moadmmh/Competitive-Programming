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
int a[100005];

int main()
{
    //freopen("input.txt","r",stdin);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        sf(a[i]);
    }
    sort(a, a + n);
    ll sum = 0;
    for (int i = 1; i < n; ++i)
    {
        if ((a[i] - a[0]) % k == 0)
        {
            sum += (a[i] - a[0]) / k;
        }
        else
            return cout << -1 << endl, 0;
    }
    cout << sum << endl;
    return 0;
}