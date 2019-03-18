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
int v[127];

void buildv()
{
    v[' '] = 0;
    v['!'] = 9;
    v['"'] = 6;
    v['#'] = 24;
    v['$'] = 29;
    v['%'] = 22;
    v['&'] = 24;
    v['\''] = 3;
    v['('] = 12;
    v[')'] = 12;
    v['*'] = 17;
    v['+'] = 13;
    v[','] = 7;
    v['-'] = 7;
    v['.'] = 4;
    v['/'] = 10;
    v['0'] = 22;
    v['1'] = 19;
    v['2'] = 22;
    v['3'] = 23;
    v['4'] = 21;
    v['5'] = 27;
    v['6'] = 26;
    v['7'] = 16;
    v['8'] = 23;
    v['9'] = 26;
    v[':'] = 8;
    v[';'] = 11;
    v['<'] = 10;
    v['='] = 14;
    v['>'] = 10;
    v['?'] = 15;
    v['@'] = 32;
    v['A'] = 24;
    v['B'] = 29;
    v['C'] = 20;
    v['D'] = 26;
    v['E'] = 26;
    v['F'] = 20;
    v['G'] = 25;
    v['H'] = 25;
    v['I'] = 18;
    v['J'] = 18;
    v['K'] = 21;
    v['L'] = 16;
    v['M'] = 28;
    v['N'] = 25;
    v['O'] = 26;
    v['P'] = 23;
    v['Q'] = 31;
    v['R'] = 28;
    v['S'] = 25;
    v['T'] = 16;
    v['U'] = 23;
    v['V'] = 19;
    v['W'] = 26;
    v['X'] = 18;
    v['Y'] = 14;
    v['Z'] = 22;
    v['['] = 18;
    v['\\'] = 10;
    v[']'] = 18;
    v['^'] = 7;
    v['_'] = 8;
    v['`'] = 3;
    v['a'] = 23;
    v['b'] = 25;
    v['c'] = 17;
    v['d'] = 25;
    v['e'] = 23;
    v['f'] = 18;
    v['g'] = 30;
    v['h'] = 21;
    v['i'] = 15;
    v['j'] = 20;
    v['k'] = 21;
    v['l'] = 16;
    v['m'] = 22;
    v['n'] = 18;
    v['o'] = 20;
    v['p'] = 25;
    v['q'] = 25;
    v['r'] = 13;
    v['s'] = 21;
    v['t'] = 17;
    v['u'] = 17;
    v['v'] = 13;
    v['w'] = 19;
    v['x'] = 13;
    v['y'] = 24;
    v['z'] = 19;
    v['{'] = 18;
    v['|'] = 12;
    v['}'] = 18;
    v['~'] = 9;
}

int main()
{
    //freopen("input.txt","r",stdin);
    string s;
    buildv();
    //cin.ignore();
    while (getline(cin, s))
    {
        int res = 0;
        for (int i = 0; i < sz(s); ++i)
        {
            res += v[s[i]];
        }
        cout << res << endl;
    }
    return 0;
}