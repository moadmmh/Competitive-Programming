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
    int a[3];
    for (int i = 0; i < 3; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + 3);
    int x = a[1] - a[0], y = a[2] - a[1];
    if (x == y)
        cout << a[2] + x << endl;
    else if (x > y)
    {
        cout << a[0] + x / 2 << endl;
    }
    else
        cout << y / 2 + a[1] << endl;

    return 0;
}
