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
ull tmp = 0, ans = 0;
void bin(ll n)
{
    if (n > 1)
        bin(n / 2);

    ans = ans * 10 + n % 2;
}
ll dec(ull tmp)
{
    ll res = 0;
    int cnt = 0;
    while (tmp)
    {
        res += (pow(2, cnt)) * (tmp % 10);
        tmp /= 10;
        cnt += 1;
    }
    return res;
}
int main()
{
    //freopen("input.txt","r",stdin);
    ll n;
    cin >> n;
    while (n)
    {
        ans *= 2;
        ans += n % 2;
        n /= 2;
    }
    cout << ans << endl;

    return 0;
}
