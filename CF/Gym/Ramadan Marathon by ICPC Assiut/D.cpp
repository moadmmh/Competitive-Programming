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
#define mod 1000 * 1000 * 100 + 7
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

int a[1000005], b[1000005];
map<int, int> mp;
int main()
{
    memset(b, -2, sizeof b);
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; ++i)
    {
        sf(a[i]);
        //mp[a[i]] = i + 1;
    }

    stack<int> s;
    for (int i = n - 1; i >= 0; --i)
    {
        while (!s.empty() and a[s.top()] <= a[i])
        {
            s.pop();
            //cout<<"delete"<<endl;
        }
        if (s.empty())
            b[i] = -1;
        else
            b[i] = s.top() + 1;

        s.push(i);
    }
    while (q--)
    {
        int x;
        sf(x);
        pf(b[x-1]);
        p();
    }
    return 0;
}
