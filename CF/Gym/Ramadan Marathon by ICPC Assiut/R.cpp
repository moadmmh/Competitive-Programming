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
#define mod 1000 * 1000 * 100 + 7
#define pi 3.1415926536
#define ex 1e18
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main()
{
    string s;
    cin >> s;
    bool nine = 0, three = 0, two = 0;
    int sum = 0;
    for (int i = 0; i < sz(s); ++i)
    {
        sum += (s[i] - '0');
    }
    if (sum % 9 == 0)
        nine = 1;
    if (sum % 3 == 0)
        three = 1;
    if (s[sz(s) - 1] == '0' || s[sz(s) - 1] == '2' || s[sz(s) - 1] == '4' || s[sz(s) - 1] == '6' || s[sz(s) - 1] == '8')
        two = 1;
    if (two and three and nine)
        cout << "6 9" << endl;
    else if (nine)
        cout << "9" << endl;
    else if (two and three)
        cout << "6" << endl;
    else
        cout << -1 << endl;
    return 0;
}
