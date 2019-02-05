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

bool vow(char c)
{
    return (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'y');
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    string s, t = "";
    cin >> s;
    for (int i = sz(s) - 1; i > 0; --i)
    {
        if (vow(s[i]) and vow(s[i - 1]))
            continue;
        else
            t += s[i];
    }
    t += s[0];
    for (int i = sz(t) - 1; i >= 0; --i)
    {
        cout << t[i];
    }
    p();
    return 0;
}
