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

int a[501][501];
vector<int> v;
int main()
{
    int n, k;
    cin >> n >> k;
    int mini = n * n - ((n - k + 1) * n);
    ll sum = 0;
    for (int i = mini + 1; i <= n * n; i += (n - k + 1))
    {
        sum += i;
    }
    cout << sum << endl;
    int curr1 = mini + 1, curr2 = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = k - 1; j < n; ++j)
        {
            a[i][j] = curr1;
            curr1++;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < k - 1; ++j)
        {
            a[i][j] = curr2;
            curr2++;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j] << " ";
        }
        p();
    }
    return 0;
}