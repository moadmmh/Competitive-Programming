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
int str_to_int(string s)
{
    int res = 0;
    for (int i = 0; i < sz(s); ++i)
    {
        res = res * 10 + (s[i] - '0');
    }
    return res;
}
set<pair<int, int>> st;
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    while (cin >> n)
    {
        cin.ignore();
        cin >> n;
        int cnt = 1, ans = 0;
        int x = 0, y = 0;
        for (x = n + 1; x <= 2 * n; ++x)
        {
            if (x * n % (x - n) == 0)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
