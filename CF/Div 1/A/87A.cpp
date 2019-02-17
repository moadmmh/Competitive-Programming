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

ll gcd(int a, int b){ return b == 0 ? a : gcd(b, a % b); }
ll lcm(int a, int b) { return a *1LL* (b / gcd(a, b)); }

int main()
{
    //freopen("input.txt","r",stdin);
    int a, b;
    cin >> a >> b;
    ll x = lcm(a, b);
    if (abs(x / a - x / b) == 1)
        return cout << "Equal" << endl, 0;
    else if ((x / a) > (x / b))
        return cout << "Dasha" << endl, 0;
    cout << "Masha" << endl;
    return 0;
}