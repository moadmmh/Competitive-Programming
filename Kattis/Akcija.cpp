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
vector<int> v;
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        sf(x);
        sum += x;
        v.pb(x);
    }
    sort(all(v));
    for (int i = n - 3; i >= 0; i-=3)
    {
        sum -= v[i];
    }
    cout << sum << endl;
    return 0;
}
