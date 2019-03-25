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

vector<ll> v;
bool super(ll x)
{
    int a = 0, b = 0;
    while (x)
    {
        if (x % 10 == 4)
            a += 1;
        else
            b += 1;
        x /= 10;
    }
    return a == b;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    queue<ll> q;
    q.push(4);
    q.push(7);
    while (q.front() < 100000000000)
    {
        ll x = q.front();
        q.push(x * 10 + 4);
        q.push(x * 10 + 7);
        if (super(x))
            v.pb(x);
        q.pop();
    }
    for (int i = 0; i < sz(v); ++i)
    {
        if (v[i] >= n)
            return cout << v[i] << endl, 0;
    }
    return 0;
}
int main()
{
    //freopen("input.txt","r",stdin);
    
    return 0;
}