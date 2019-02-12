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
ll n, k;
bool check(ll x)
{
    //sum of first n splitters
    ll mini = (2 + (2 + x - 1)) * (x) / 2 - (x - 1);
    //sum of last n splitters
    ll maxi = (k - (x - 1) + k) * (x) / 2 - (x - 1);
    //cout<<mini<<" "<<maxi<<endl;
    return (n <= maxi);
}
int main()
{
    //freopen("input.txt","r",stdin);

    cin >> n >> k;
    ll maxi = 1 + (k - 1) * k / 2;
    if (n <= k and n > 1)
        return cout << 1 << endl, 0;
    if (n == maxi)
        return cout << k - 1 << endl, 0;
    if (n > maxi)
        return cout << -1 << endl, 0;
    if (n == 1)
        return cout << 0 << endl, 0;
    ll l = 2, r = k - 1, mid;
    while (l <= r)
    {
        mid = (r - l + 1) / 2 + l;
        //cout<<mid<<endl;
        //cout<<check(mid)<<endl;
        if (check(mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
    return 0;
}
