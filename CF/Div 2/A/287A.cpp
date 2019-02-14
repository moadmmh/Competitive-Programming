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

queue<int> q;

int main()
{
    //freopen("input.txt","r",stdin);
    string s[4];
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    int b = 0, w = 0;
    for (int i = 1; i < 4; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            b = 0;
            w = 0;
            s[i][j] == '#' ? b += 1 : w += 1;
            s[i - 1][j] == '#' ? b += 1 : w += 1;
            s[i][j + 1] == '#' ? b += 1 : w += 1;
            s[i - 1][j + 1] == '#' ? b += 1 : w += 1;
            if (b == 0 or b == 3 or b == 4 or b == 1)
                return cout << "YES" << endl, 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
