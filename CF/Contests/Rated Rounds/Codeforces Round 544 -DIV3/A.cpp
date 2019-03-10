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

int main()
{
    //freopen("input.txt","r",stdin);
    string s, t;
    cin >> s >> t;
    int h1 = (s[0] - '0') * 10 + (s[1] - '0'), h2 = (t[0] - '0') * 10 + (t[1] - '0');
    int m1 = (s[3] - '0') * 10 + (s[4] - '0'), m2 = (t[3] - '0') * 10 + (t[4] - '0');
    int diffh = h2 - h1, diffm = m2 - m1;

    if (diffm < 0)
    {
        diffm += 60;
        diffh -= 1;
    }
    if (diffh < 0)
        diffh += 24;

    if (diffh & 1)
    {
        diffm += 60;
        diffh -= 1;
    }

    //cout<<diffh<<" "<<diffm<<endl;
    int nh = (h1 + (diffh / 2));
    int nm = (m1 + diffm / 2);
    if ((m1 + diffm / 2) > 59)
        nh += 1;

    if (nh % 24 < 10)
        cout << '0' << nh % 24 << ":";
    else
        cout << nh % 24 << ":";
    if (nm % 60 < 10)
        cout << '0' << nm % 60 << endl;
    else
    {
        cout << nm % 60 << endl;
    }

    return 0;
}