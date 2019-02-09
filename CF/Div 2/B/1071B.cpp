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

int a[55][55];

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int zr = 0, onezr = 0, zrone = 0, one = 0;

    for (int i = 0; i < sz(s); ++i)
    {
        if (s[i] == '0' and t[i] == '0')
            zr += 1;
        if (s[i] == '0' and t[i] == '1')
            zrone += 1;
        if (s[i] == '1' and t[i] == '0')
            onezr += 1;
        if (s[i] == '1')
            one += 1;
    }
    ll ans = (one *1LL* zr) + (zrone *1LL* onezr);
    cout << ans << endl;
    return 0;
}
