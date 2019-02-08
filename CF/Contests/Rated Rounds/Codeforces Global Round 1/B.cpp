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
int a[100005];
vector<int> v;
int main()
{
    //freopen("input.txt","r",stdin);
    int n, l, k;
    cin >> n >> l >> k;
    if (n == k)
        return cout << n << endl, 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; ++i)
    {
        v.pb(a[i] - a[i - 1] - 1);
    }
    sort(all(v));
    ll res = n;
    for (int i = 0; i < n - k; ++i)
    {
        res += v[i];
    }
    cout << res << endl;
    return 0;
}
