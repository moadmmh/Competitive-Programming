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
bool isvowel(char c)
{
    return (c == 'a' or c == 'e' or c == 'o' or c == 'i' or c == 'u');
}
bool isodd(char c)
{
    return (c == '1' or c == '3' or c == '5' or c == '7' or c == '9');
}

int main()
{
    //freopen("input.txt","r",stdin);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    //n*a-c*m=d-b
    for (int i = 0; i <= 100; ++i)
    {
        for (int j = 0; j <= 100; ++j)
        {
            if (a * i + b == c * j + d)
                return cout << a * i + b << endl, 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
