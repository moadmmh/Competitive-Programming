#include <bits/stdc++.h>

using namespace std;
#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 2e9
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

vector<int> psq;
string too_string(int x)
{
    string res = "";
    while (x)
    {
        res = char((x % 10) + '0') + res;
        x /= 10;
    }
    return res;
}
bool valid(string t, string s)
{
    int st = 0, cnt = 0;
    if (sz(t) > sz(s))
        return false;
    for (int i = 0; i < sz(t); ++i)
    {
        for (int j = st; j < sz(s); ++j)
        {
            if (t[i] == s[j])
            {
                st = j + 1;
                cnt += 1;
                break;
            }
        }
    }
    return cnt == sz(t);
}
int main()
{
    string s;
    cin >> s;

    for (int i = 1; i * i <= MAX; ++i)
    {
        psq.pb(i * i);
    }
    int ans = 1000;
    for (int i = 0; i < sz(psq); ++i)
    {
        if (valid(too_string(psq[i]), s))
        {
            //cout << psq[i] << endl;
            ans = min(ans, int(sz(s) - sz(too_string(psq[i]))));
        }
    }
    cout << (ans == 1000 ? -1 : ans) << endl;
    return 0;
}
