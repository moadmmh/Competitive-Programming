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

ll a[10000001], sum[10000001];
bool prime[10000001];
void SieveOfEratosthenes(int n)
{
    prime[0] = prime[1] = 0;
    for (int p = 2; p <= n; p++)
    {
        if (prime[p] == true)
        {
            sum[p] += a[p];
            for (int i = p + p; i <= n; i += p)
            {
                prime[i] = false;
                sum[p] += a[i];
            }
        }
        sum[p] += sum[p - 1];
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n, tmp = 0;
    cin >> n;
    memset(prime, true, sizeof(prime));
    for (int i = 0; i < n; ++i)
    {
        int x;
        sf(x);
        a[x] += 1;
    }
    SieveOfEratosthenes(10000000);
    int m;
    cin >> m;
    int l, r;
    while (m--)
    {
        cin >> l >> r;
        if (r > 10000000)
            r = 10000000;
        if (l > 10000000)
            l = 10000000;
        cout << (abs(sum[r] - sum[l - 1] )) << endl;
    }
    return 0;
}