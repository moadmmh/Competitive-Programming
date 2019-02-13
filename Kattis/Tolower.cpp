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

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        bool boleh = true;
        for (int j = 0; j < m; ++j)
        {
            string s;
            cin >> s;
            for (int k = 1; k < sz(s); ++k)
            {
                if (s[k] != tolower(s[k]))
                    boleh = false;
            }
                }
        if (boleh)
            ans += 1;
    }
    cout << ans << endl;
    return 0;
}
