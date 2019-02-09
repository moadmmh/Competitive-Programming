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

vector<int> v[10005];
map<int, int> mp;

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; ++j)
        {
            int x;
            cin >> x;
            v[i].pb(x);
        }
    }
    for (int i = 0; i < m; ++i)
    {
        bool ok = false;
        mp.clear();
        for (int j = 0; j < sz(v[i]); ++j)
        {
            mp[v[i][j]] += 1;
        }
        for (int j = 0; j < sz(v[i]); ++j)
        {
            if (mp[v[i][j]] and mp[-1*v[i][j]])
                ok = true;
        }
        if (!ok or sz(v[i]) == 1)
            return cout << "YES" << endl, 0;
    }
    cout << "NO" << endl;
    return 0;
}
