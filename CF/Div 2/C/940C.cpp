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
int cnt = 0;
map<char, int> mp;
int a[28];
char b[28];
string operation(string s)
{
    for (int i = sz(s) - 1; i >= 0; --i)
    {
        if ((s[i] - '0') + 1 <= cnt - 1)
        {
            s[i] = (((s[i] - '0') + 1) + '0');
            break;
        }
        else
        {
            s[i] = '0';
        }
    }
    return s;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    string d = s;
    sort(all(d));
    for (int i = 0; i < n; ++i)
    {
        if (a[d[i] - 'a'] != 1)
        {
            mp[d[i]] = cnt;
            b[cnt] = d[i];
            cnt += 1;
            a[d[i] - 'a'] = 1;
        }
    }
    if (n < m)
    {
        string x = s;
        sort(all(x));
        cout << s;
        for (int i = 0; i < m - n; ++i)
        {
            cout << x[0];
        }
        p();
        return 0;
    }
    string x = s.substr(0, m), tmp = "";
    //cout<<x<<endl;
    for (int i = 0; i < m; ++i)
    {
        tmp = tmp + char(mp[x[i]] + '0');
    }

    string tmp2 = operation(tmp);
    //cout<<tmp<<" "<<tmp2<<endl;
    for (int i = 0; i < m; ++i)
    {
        cout << b[(tmp2[i] - '0')];
    }
    p();
    return 0;
}