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
#define ex 1e9
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int a[100005];
map<int, int> mp;
map<pair<int, int>, int> prs;

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]] += 1;
    }
    ll cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 31; pow(2, j) > a[i]; --j)
        {
            int x = pow(2, j) - a[i];
            if (mp[x] and a[i] != x and !prs[make_pair(a[i], x)])
            {
                cnt += (mp[a[i]] * 1LL * mp[x]);
                prs[make_pair(a[i], x)] = 1;
                prs[make_pair(x, a[i])] = 1;
            }
        }
    }
    //cout << cnt << endl;
    for (int i = 0; i < 31; ++i)
    {
        int x = pow(2, i);
        if (mp[x])
        {
            cnt += (mp[x] - 1) * 1LL * mp[x] / 2;
        }
    }
    cout << cnt << endl;
    return 0;
}