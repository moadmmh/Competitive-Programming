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

bool isvowel(char s)
{
    return (s == 'a' or s == 'i' or s == 'u' or s == 'o' or s == 'e');
}

int main()
{
    //freopen("input.txt","r",stdin);
    string s, t;
    cin >> s >> t;
    if (sz(s) != sz(t))
        return cout << "No" << endl, 0;
    for (int i = 0; i < sz(s); ++i)
    {
        if (isvowel(s[i]) and isvowel(t[i]) or (!isvowel(s[i]) and !isvowel(t[i])))
            continue;
        else
            return cout << "No" << endl, 0;
    }
    cout << "Yes" << endl;
    return 0;
}