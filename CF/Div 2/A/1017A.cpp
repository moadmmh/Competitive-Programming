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
    int n, cnt = 0, ref = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x, sum = 0;
        for (int j = 0; j < 4; ++j)
        {
            cin >> x;
            sum += x;
        }
        if (i == 0)
            ref = sum;
        if (sum > ref)
            cnt += 1;
    }
    cout << cnt + 1 << endl;
    return 0;
}
