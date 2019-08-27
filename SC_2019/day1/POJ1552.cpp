//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include<algorithm>
#include<vector>
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
//const double PI = acos(-1);


vector<int>v;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};



int main()
{
    int x;
    while (cin >> x)
    {
        if (x == -1)
            break;
        v.clear();
        v.pb(x);
        while (cin >> x and x)
            v.pb(x);
        int cnt = 0;
        for (int i = 0; i < sz(v); ++i)
        {
            for (int j = 0; j < sz(v); ++j)
            {
                if (v[i] * 2 == v[j] or v[j] * 2 == v[i])
                    cnt += 1;
            }
        }
        cout << cnt/2 << endl;
    }
    return 0;
}
