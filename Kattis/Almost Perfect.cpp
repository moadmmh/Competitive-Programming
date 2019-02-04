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

vector<int> dev;
void devisors(int n)
{
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            dev.pb(i);
            if (i != n / i and i != 1)
                dev.pb(n / i);
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    while (cin >> n)
    {
        dev.clear();
        devisors(n);
        int sum = 0;
        for (int i = 0; i < sz(dev); ++i)
        {
            sum += dev[i];
        }
        p();
        if (sum == n)
            cout << n << " perfect" << endl;
        else if (abs(n - sum) <= 2)
            cout << n << " almost perfect" << endl;
        else
            cout << n << " not perfect" << endl;
    }
    return 0;
}
