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

int main()
{
    //freopen("input.txt","r",stdin);
    int n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;
    while (k--)
    {
        int ta, fa, tb, fb;
        cin >> ta >> fa >> tb >> fb;
        int res = abs(ta - tb);
        if (res == 0)
        {
            cout << abs(fa - fb) << endl;
            continue;
        }
        int tmp = 0, dum = fa;
        if (fa > b)
        {
            tmp = abs(b - fa);
            dum = b;
        }
        else if (fa < a)
        {
            tmp = abs(a - fa);
            dum = a;
        }
        res += tmp + abs(dum - fb);
        cout << res << endl;
    }
    return 0;
}
