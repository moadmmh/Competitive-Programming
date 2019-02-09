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

int a[3];

int main()
{
    //freopen("input.txt","r",stdin);
    ll n;
    int x;
    cin >> n >> x;
    n %= 6;

    for (int i = 0; i < 3; ++i)
    {
        a[i] = 1;
        for (int i = 1; i <= n; ++i)
        {
            if (i & 1)
                swap(a[0], a[1]);
            else
                swap(a[1], a[2]);
        }
        if (a[x] == 1)
            return cout << i << endl, 0;
        a[2] = 0;
        a[1] = 0;
        a[0] = 0;
    }
    return 0;
}
