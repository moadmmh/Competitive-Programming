#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d\n", n)
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
#define len(s) (int)s.length()
#define sz(x) (int)x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
queue<int> q;
int vis[100005];
int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    cin >> n >> m;
    memset(vis, 0x3f, sizeof vis);
    q.push(n);
    vis[n] = 0;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        if (x == m)
        {
            cout << vis[x] << endl;
            return 0;
        }
        int tmp = x * 2;
        if (tmp <= 10000 and vis[tmp] > vis[x] + 1)
        {
            vis[tmp] = vis[x] + 1;
            q.push(tmp);
        }
        tmp = x - 1;
        if (tmp > 0 and vis[tmp] > vis[x] + 1)
        {
            vis[tmp] = vis[x] + 1;
            q.push(tmp);
        }
    }
    return 0;
}
