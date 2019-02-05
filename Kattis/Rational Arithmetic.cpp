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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    //freopen("input.txt","r",stdin);
    int T;
    cin >> T;
    ll x1, y1, x2, y2;
    char op;
    while (T--)
    {
        cin >> x1 >> y1 >> op >> x2 >> y2;
        if (op == '+')
        {
            ll u = x1 *1LL* y2 + y1 *1LL* x2, d = y2 *1LL* y1;
            ll tmp = gcd(abs(u), abs(d));
            if (u < 0 and d < 0)
            {
                u = abs(u);
                d = abs(d);
            }
            else if (d < 0)
            {
                u = -1 * u;
                d = abs(d);
            }
            if(d==0 or u==0)
                cout<<"0 / 1"<<endl;
            else
                cout << (u) / tmp << " / " << d / tmp << endl;
        }
        if (op == '*')
        {
            ll u = x1 *1LL* x2, d = y2 *1LL* y1;
            ll tmp = gcd(abs(u), abs(d));
            if (u < 0 and d < 0)
            {
                u = abs(u);
                d = abs(d);
            }
            else if (d < 0)
            {
                u = -1 * u;
                d = abs(d);
            }
            if(d==0 or u==0)
                cout<<"0 / 1"<<endl;
            else
                cout << (u) / tmp << " / " << d / tmp << endl;
        }
        if (op == '/')
        {
            ll u = x1 *1LL* y2, d = x2 *1LL* y1;
            ll tmp = gcd(abs(u), abs(d));
            if (u < 0 and d < 0)
            {
                u = abs(u);
                d = abs(d);
            }
            else if (d < 0)
            {
                u = -1 * u;
                d = abs(d);
            }
            if(d==0 or u==0)
                cout<<"0 / 1"<<endl;
            else
                cout << (u) / tmp << " / " << d / tmp << endl;
        }
        if (op == '-')
        {
            ll u = x1 *1LL* y2 - y1 *1LL* x2, d = y2 *1LL* y1;
            ll tmp = gcd(abs(u), abs(d));
            if (u < 0 and d < 0)
            {
                u = abs(u);
                d = abs(d);
            }
            else if (d < 0 and u > 0)
            {
                u = -1 * u;
                d = abs(d);
            }
            if(d==0 or u==0)
                cout<<"0 / 1"<<endl;
            else
                cout << (u) / tmp << " / " << d / tmp << endl;
        }
    }
    return 0;
}
