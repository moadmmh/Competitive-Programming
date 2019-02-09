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
ll even(ll n)
{
    ll x = n / 2;
    return x * (x + 1);
}
ll odd(ll n)
{
    ll x = n - (n / 2);
    return x * x;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        if (l == r)
        {
            if (l & 1)
                cout << -1 * l << endl;
            else
                cout << l << endl;
            continue;
        }
        ll ev = even(r) - even(l - 1);
        ll od = odd(r) - odd(l - 1);
        cout << ev - od << endl;
    }

    return 0;
}
