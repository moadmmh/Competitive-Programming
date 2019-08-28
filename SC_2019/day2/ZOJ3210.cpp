//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <algorithm>
#include <vector>
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
#define ex 1e18
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second
#define clr(x) x.clear()
#define LOG(x) std::cout << x << std::endl;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = 3.14159265359;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int n;
int a[105],b[105];
bool isstack()
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[n - 1 - i])
            return false;
    }
    return true;
}
bool isqueue()
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            a[i] = b[i] = 0;
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        if (isstack() and isqueue())
        {
            cout << "both" << endl;
        }
        else if (isstack())
            cout << "stack" << endl;
        else if (isqueue())
            cout << "queue" << endl;
        else
            cout << "neither" << endl;
    }
    return 0;
}
