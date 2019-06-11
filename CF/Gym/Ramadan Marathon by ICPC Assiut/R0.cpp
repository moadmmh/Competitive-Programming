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
#define mod 1000 * 1000 * 1000 + 7
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

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;

bool pal_bin(int x)
{
    string s = "";
    int p = 1;
    for (int i = 0; i <= 31; ++i)
    {
        if (x & p)
            s = '1' + s;
        else
            s = '0' + s;
        p *= 2;
    }
    string t;
    for (int i = 0; i < sz(s); ++i)
    {
        if (s[i] == '1')
        {
            t = s.substr(i, sz(s) - i);
            break;
        }
    }
    //cout<<t<<endl;
    for (int i = 0; i < sz(t) / 2; ++i)
    {
        if (t[i] != t[sz(t) - 1 - i])
            return false;
    }

    return true;
}

bool ispal(int x)
{
    string s = "";
    while (x)
    {
        char c = (x % 10 + '0');
        s = c + s;
        x /= 10;
    }
    for (int i = 0; i < sz(s) / 2; ++i)
    {
        if (s[i] != s[sz(s) - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x;
        sf(x);
        if (x < 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (pal_bin(x) and ispal(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
