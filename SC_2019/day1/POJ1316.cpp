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
char a, b;
double A, B, temp, hum, dew;
double dohum(double tt, double dd)
{
    double e = 6.11 * exp(5417.7530 * ((1 / 273.16) - (1 / (dd + 273.16))));
    double h = (0.5555) * (e - 10.0);
    return tt + h;
}
double dotemp()
{
    double e = 6.11 * exp(5417.7530 * ((1 / 273.16) - (1 / (dew + 273.16))));
    double h = (0.5555) * (e - 10.0);
    return hum - h;
}
double dodew()
{
    double x = 0;
    double delta = 100;
    for (delta = 100; delta > .00001; delta *= .5)
    {
        if (dohum(temp, x) > hum)
            x -= delta;
        else
            x += delta;
    }
    return x;
}
int main()
{
    while (cin >> a && a != 'E')
    {
        cin >> A >> b >> B;
        temp = hum = dew = -99999;
        if (a == 'T')
            temp = A;
        if (a == 'H')
            hum = A;
        if (a == 'D')
            dew = A;
        if (b == 'T')
            temp = B;
        if (b == 'H')
            hum = B;
        if (b == 'D')
            dew = B;
        if (hum == -99999)
            hum = dohum(temp, dew);
        if (dew == -99999)
            dew = dodew();
        if (temp == -99999)
            temp = dotemp();
        printf("T %0.1lf D %0.1lf H %0.1lf\n", temp, dew, hum);
    }

    return 0;
}
