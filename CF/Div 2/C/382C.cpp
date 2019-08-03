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
#define ex 1e18
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second
#define clr(x) x.clear()

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = acos(-1);

int n;
int a[100005];
map<int, int> mp;

int arth_test()
{
    int diff = a[1] - a[0];

    set<int> tmp;
    for (int i = 1; i < n; ++i)
    {
        tmp.insert(a[i] - a[i - 1]);
        mp[a[i] - a[i - 1]] += 1;
    }
    return tmp.size();
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (n == 1)
    {
        return cout << -1 << endl, 0;
    }
    if (n == 2)
    {
        int diff = a[1] - a[0];
        if (!diff)
        {
            cout << 1 << endl;
            return cout << a[0] << endl, 0;
        }
        if (diff % 2 == 0 and diff)
        {
            cout << 3 << endl;
            cout << a[0] - diff << " " << ((a[0] + a[1]) / 2) << " " << a[1] + diff << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << a[0] - diff << " " << a[1] + diff << endl;
        }
        return 0;
    }
    int x = arth_test();
    if (x == 1)
    {
        int diff = a[1] - a[0];
        if (!diff)
        {
            cout << 1 << endl;
            return cout << a[0] << endl, 0;
        }
        cout << 2 << endl;
        cout << a[0] - diff << " " << a[n - 1] + diff << endl;
    }
    else if (x == 2)
    {
        //cout << "here" << endl;
        pair<int, int> x, y;
        if (n == 3)
        {
            int v, z;
            v = a[1] - a[0];
            z = a[2] - a[1];
            if (v > z)
            {
                x = make_pair(1, 0);
                y = make_pair(2, 1);
            }
            else
            {
                y = make_pair(1, 0);
                x = make_pair(2, 1);
            }
            if ((a[x.S] - a[x.F]) % 2 == 0 and ((a[x.S] - a[x.F]) / 2) == (a[y.S] - a[y.F]))
            {
                cout << 1 << endl;
                cout << a[x.F] + ((a[x.S] - a[x.F]) / 2) << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            return 0;
        }
        for (int i = 1; i < n; ++i)
        {
            if (mp[a[i] - a[i - 1]] == 1)
            {
                x.F = i - 1;
                x.S = i;
            }
            else
            {
                y.F = i - 1;
                y.S = i;
            }
        }
        if ((a[x.S] - a[x.F]) < (a[y.S] - a[y.F]) or !(a[y.S] - a[y.F]) or !(a[x.S] - a[x.F]))
        {
            return cout << "0" << endl, 0;
        }
        else if ((a[x.S] - a[x.F]) % 2 == 0 and ((a[x.S] - a[x.F]) / 2) == (a[y.S] - a[y.F]))
        {
            cout << 1 << endl;
            cout << a[x.F] + ((a[x.S] - a[x.F]) / 2) << endl;
        }
        else
        {
            return cout << "0" << endl, 0;
        }
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
