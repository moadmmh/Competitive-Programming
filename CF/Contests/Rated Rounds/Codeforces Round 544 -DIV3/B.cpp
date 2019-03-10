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

int a[200005];
map<int, int> mp;
int main()
{
    //freopen("input.txt","r",stdin);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[(a[i] % k)] += 1;
    }
    int cnt = 0;
    int tmp = (mp[0] / 2);
    cnt += tmp * 2;
    for (int i = 1; i <= (k) / 2; ++i)
    {
        if (k - i and i)
        {
            int x = 0;
            if ((k - i) % k == i)
            {
                x = mp[i] / 2;
            }
            else
                x = min(mp[(k - i) % k], mp[i]);
            cnt += (x * 2);
        }
    }
    cout << cnt << endl;
    return 0;
}