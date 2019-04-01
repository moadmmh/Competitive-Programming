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
#define ex 1e18
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

map<int, int> mp;
vector<int> v;
int a[120005];

void generate()
{
    int x = 1;
    v.pb(1);
    for (int i = 1; i < 31; ++i)
    {
        x *= 2;
        v.pb(x);
    }
}

int main()
{

    int n;
    cin >> n;
    generate();
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]] += 1;
    }
    if (n == 1)
    {
        return cout << 1 << endl, 0;
    }
    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        bool found = false;
        for (int j = 0; j < sz(v); ++j)
        {
            if (v[j] > a[i])
            {
                if (mp[v[j] - a[i]] >= 1 and (a[i]!=v[j] - a[i] or mp[v[j] - a[i]]>1))
                {
                    found = true;
                    break;
                }
            }
        }
        if (!found){
            cnt += 1;
            //cout<<a[i]<<endl;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
