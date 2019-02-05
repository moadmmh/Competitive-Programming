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

char a[305][305];

bool diag(int n)
{
    char ref = a[0][0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j and ref != a[i][j])
                return false;
            else if (j == n - 1 - i and a[i][j] != ref)
                return false;
        }
    }
    return true;
}
bool others(int n)
{
    if (a[0][0] == a[0][1])
        return false;
    char ref = a[0][1];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j and j != n - 1 - i and a[i][j] != ref)
                return false;
        }
    }
    return true;
}
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
    if (diag(n) and others(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
