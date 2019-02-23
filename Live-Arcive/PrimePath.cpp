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

vector<int> prim;
vector<int> grp[11000];
int vis[10000];
bool isPrime(int n)
{
    if (n < 2)
        return 0;
    if (n % 2 == 0)
        return (n == 2);
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
int diff(int x, int y)
{
    int cnt = 0;
    while (x and y)
    {
        if (x % 10 != y % 10)
            cnt += 1;
        x /= 10;
        y /= 10;
    }
    return cnt;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int T;
    cin >> T;
    //genrating prime numbers with 4 digits
    for (int i = 1000; i <= 9999; ++i)
    {
        if (isPrime(i))
            prim.pb(i);
    }
    sort(all(prim));
    // build the graph
    for (int i = 0; i < sz(prim); ++i)
    {
        for (int j = 0; j < sz(prim); ++j)
        {
            if (i != j and diff(prim[i], prim[j]) == 1)
            {
                grp[prim[i]].pb(prim[j]);
                grp[prim[j]].pb(prim[i]);
            }
        }
    }
    while (T--)
    {
        memset(vis, 0x3f, sizeof vis);
        queue<int> qu;
        int st, en;
        cin >> st >> en;
        if (st == en)
        {
            cout << 0 << endl;
            continue;
        }
        qu.push(st);
        vis[st] = 0;
        while (!qu.empty())
        {
            int x = qu.front();
            qu.pop();
            for (int i = 0; i < sz(grp[x]); ++i)
            {
                int y = grp[x][i];
                if (vis[y] > vis[x] + 1)
                {
                    vis[y] = vis[x] + 1;
                    qu.push(y);
                }
            }
        }
        if (vis[en] < 100000)
            cout << vis[en] << endl;
        else
            cout << "impossible" << endl;
    }
    return 0;
}