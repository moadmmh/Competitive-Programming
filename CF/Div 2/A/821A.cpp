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

int a[55][55];

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            bool found = true;
            if (a[i][j] > 1)
            {
                found = false;
                for (int x = 0; x < n; ++x)
                {
                    for (int y = 0; y < n; ++y)
                    {
                        if (a[i][x] + a[y][j] == a[i][j])
                            found = true;
                    }
                    if (found)
                        break;
                }
            }
            if (!found)
                return cout << "No" << endl, 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
