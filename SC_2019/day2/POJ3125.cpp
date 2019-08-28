//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
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
#define LOG(x) std::cout << x << std::endl;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = 3.14159265359;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int a[105], pos[105];

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        queue<pair<int, int>> v;
        priority_queue<int> pq;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
            pos[i] = -1;
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            pq.push(a[i]);
            v.push(make_pair(a[i], i));
        }
        while (!v.empty())
        {
            if (v.front().F == pq.top())
            {
                cnt += 1;
                if (v.front().S == m)
                {
                    cout << cnt << endl;
                }
                v.pop();
                pq.pop();
            }
            else
            {
                pair<int, int> x = v.front();
                v.pop();
                v.push(x);
            }
        }
    }
    return 0;
}
