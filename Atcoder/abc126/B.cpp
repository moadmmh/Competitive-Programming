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
#define mod 1000 * 1000 * 1000 + 7
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
#define fir first
#define sec second

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;

int main()
{
    string s;
    cin >> s;
    if (s.substr(0, 2) == "00" and s.substr(2, 2) > "12")
        return cout << "NA" << endl, 0;
    if (s.substr(2, 2) == "00" and s.substr(0, 2) > "12")
        return cout << "NA" << endl, 0;
    if (s.substr(2, 2) == "00" and s.substr(0, 2) == "00")
        return cout << "NA" << endl, 0;
    if (s.substr(0, 2) > "12" and s.substr(2, 2) > "12")
        return cout << "NA" << endl, 0;
    if (s.substr(0, 2) <= "12" and s.substr(2, 2) <= "12" and s.substr(2, 2) > "00" and s.substr(0, 2) > "00")
        return cout << "AMBIGUOUS" << endl, 0;
    if (s.substr(0, 2) <= "12" and s.substr(0, 2) > "00")
        cout << "MMYY" << endl;
    else
        cout << "YYMM" << endl;
    return 0;
}
