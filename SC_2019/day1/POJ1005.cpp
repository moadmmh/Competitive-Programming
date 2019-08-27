//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
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

int prime[10005], sum[10005];

bool isprime(int x)
{
    for (int i = 1; i < x; ++i)
    {
        if (prime[i] and x % prime[i] == 0)
            return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    int cnt = 1;
    while (T--)
    {
        double x, y;
        cin >> x >> y;
        double r = x * x + y * y;
        double area = (r * PI) / 2;
        cout << "Property " << cnt << ": This property will begin eroding in year " << ceil(area / 50) << "." << endl;
        cnt += 1;
    }
    cout << "END OF OUTPUT." << endl;

    return 0;
}
