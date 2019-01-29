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
map<ll, int> mp;
vector<ll> v;
int main()
{
    //freopen("input.txt","r",stdin);
    int T;
    cin >> T;
    int cs = 1;
    while (T--)
    {
        v.clear();
        mp.clear();
        int x;
        cin >> x;
        for (int i = 0; i < x; ++i)
        {
            ll tmp;
            cin >> tmp;
            v.pb(tmp);
            mp[tmp] += 1;
        }
        for (int i = 0; i < x; ++i)
        {
            if (mp[v[i]] == 1)
            {
                cout << "Case #" << cs << ": " << v[i] << endl;
                break;
            }
        }
        cs++;
    }
    return 0;
}
