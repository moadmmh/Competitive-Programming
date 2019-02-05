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

int main()
{
    //freopen("input.txt","r",stdin);
    string s;
    cin >> s;
    int lc = 0, uc = 0, sp = 0, ud = 0;
    for (int i = 0; i < sz(s); ++i)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            lc += 1;
        else if (s[i] >= 'A' and s[i] <= 'Z')
            uc += 1;
        else if (s[i] == '_')
            ud += 1;
        else
            sp += 1;
    }
    cout << fixed << setprecision(9) << (double)ud / sz(s) << endl;
    cout << fixed << setprecision(9) << (double)lc / sz(s) << endl;
    cout << fixed << setprecision(9) << (double)uc / sz(s) << endl;
    cout << fixed << setprecision(9) << (double)sp / sz(s) << endl;
    return 0;
}
