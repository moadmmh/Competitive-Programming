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

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    if (n <= 3)
        return cout << 1 << endl, 0;
    int cnt = 1;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            if (n / i != i)
                cnt += 2;
            else
                cnt += 1;
        }
    }
    cout << cnt << endl;
    return 0;
}