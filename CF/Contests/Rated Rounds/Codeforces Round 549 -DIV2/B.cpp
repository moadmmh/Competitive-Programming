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

ll product(ll x)
{
    ll prod = 1;
    while (x)
    {
        prod *= (x % 10);
        x /= 10;
    }
    return prod;
}

ll findNumber(ll n)
{
    string a = "1";
    string b = to_string(n);

    ll ans = n;
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '0')
            continue;

        string curr = b;
        curr[i] = ((curr[i] - '0') - 1) + '0';

        for (int j = i + 1; j < curr.size(); j++)
            curr[j] = '9';

        int num = 0;
        for (auto c : curr)
            num = num * 10 + (c - '0');

        if ( product(ans) < product(num))
            ans = num;
    }

    return ans;
}

int main()
{
    ll n;
    cin >> n;
    ll x = findNumber(n);
    cout << product(x) << endl;

    return 0;
}
