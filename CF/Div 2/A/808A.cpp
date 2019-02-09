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

ll toint(string s)
{
    ll res = 0;
    for (int i = 0; i < sz(s); ++i)
        res = res * 10 + s[i] - '0';
    return res;
}

int main()
{
    //freopen("input.txt","r",stdin);
    string s;
    cin >> s;
    if (sz(s) == 1)
        return cout << 1 << endl, 0;

    string t = "";
    int cnt = 0;
    if (s[0] == 9)
        t += "10";
    else
        t += s[0] + 1;

    for (int i = 1; i < sz(s); ++i)
        t += '0';
    cout << toint(t) - toint(s) << endl;
    return 0;
}
