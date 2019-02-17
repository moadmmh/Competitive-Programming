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

int a[200005];

int main()
{
    //freopen("input.txt","r",stdin);
    int x, y, z, a, b, c;
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    if (a < x)
        return cout << "NO" << endl, 0;
    a -= x;
    int remy = a + b;
    if (remy < y)
        return cout << "NO" << endl, 0;
    int remall = a + b + c - y;
    if (remall < z)
        return cout << "NO" << endl, 0;
    
    cout << "YES" << endl;
    return 0;
}