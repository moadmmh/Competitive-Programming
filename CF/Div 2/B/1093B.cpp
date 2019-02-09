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

bool allsame(string s)
{
    char c = s[0];
    for (int i = 1; i < sz(s); ++i)
    {
        if (s[i] != c)
            return false;
    }
    return true;
}

bool ispalindrome(string s)
{
    for (int i = 0; i < sz(s) / 2; ++i)
    {
        if (s[i] != s[sz(s) - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        if (allsame(s))
        {
            cout << -1 << endl;
            continue;
        }
        if (ispalindrome(s))
        {
            for (int i = 1; i < sz(s); ++i)
            {
                if (s[i] != s[0])
                {
                    swap(s[i], s[0]);
                    if (!ispalindrome(s))
                    {
                        cout << s << endl;
                        break;
                    }
                }
            }
        }
        else
            cout << s << endl;
    }
    return 0;
}
