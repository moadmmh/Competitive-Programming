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
    int T;
    cin >> T;
    while (T--)
    {
        int x, a, b, c;
        cin >> x;
        int idx = -1;
        double ans = 0.0;
        for (int i = 1; i <= x; ++i)
        {
            cin >> a >> b >> c;
            double tmp = 0;
            tmp = ((-b * b) / (4 * a)) + ((b * b) / (2 * a)) + c;
            if (tmp > ans)
            {
                idx = i;
                ans = tmp;
            }
        }

        cout << idx << endl;
    }
    return 0;
}
