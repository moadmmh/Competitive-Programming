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

queue<int> q;

int main()
{
    //freopen("input.txt","r",stdin);
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; ++i)
    {
        q.push(i);
    }
    int cnt = 0;
    while (sz(q) > 2)
    {
        cnt += 1;
        int m = sz(q) / 2;
        while (m--)
        {
            int x = q.front();
            q.pop();
            int y = q.front();
            q.pop();
            if ((x == a and y == b) or (x == b and y == a))
                return cout << cnt << endl, 0;
            else if (x == a or y == a)
            {
                q.push(a);
            }
            else if (x == b or y == b)
            {
                q.push(b);
            }
            else
            {
                q.push(x);
            }
        }
    }
    cout << "Final!" << endl;
    return 0;
}