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

int s[3005], c[3005];
map<int, int> mp;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        int x = MAX;
        for (int j = i + 1; j < n; ++j)
        {
            if (s[j] > s[i])
            {
                x = min(x, c[j]);
            }
        }
        mp[s[i]] = x;
        //cout << s[i] << " " << mp[s[i]] << endl;
    }
    int ans = MAX;
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = 1 + i; j < n - 1; ++j)
        {
            if (s[j] > s[i])
            {
                ans = min(ans, c[i] + c[j] + mp[s[j]]);
            }
        }
    }
    cout << (ans >= MAX ? -1 : ans) << endl;
    return 0;
}
