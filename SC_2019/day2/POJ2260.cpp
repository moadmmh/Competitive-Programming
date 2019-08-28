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

int a[105][105];
int row[105];
int col[105];

int n;

void check_r()
{
    for (int i = 0; i < n; ++i)
    {
        int sum = 0;
        for (int j = 0; j < n; ++j)
        {
            sum += a[i][j];
        }
        if (sum & 1)
            row[i] = 1;
    }
}
void check_c()
{
    for (int i = 0; i < n; ++i)
    {
        int sum = 0;
        for (int j = 0; j < n; ++j)
        {
            sum += a[j][i];
        }
        if (sum & 1)
            col[i] = 1;
    }
}

int main()
{

    while (cin >> n and n)
    {
        for (int i = 0; i < n; ++i)
        {
            row[i] = col[i] = 0;
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
            }
        }
        check_r();
        check_c();
        int x, y, cc = 0, rc = 0;
        for (int i = 0; i < n; ++i)
        {
            if (row[i])
            {
                x = i;
                rc += 1;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (col[i])
            {
                y = i;
                cc += 1;
            }
        }
        if (!rc and !cc)
            cout << "OK" << endl;
        else if (rc == 1 and cc == 1)
        {
            cout << "Change bit (" << x + 1 << "," << y + 1 << ")" << endl;
        }
        else
        {
            cout << "Corrupt" << endl;
        }
    }

    return 0;
}
