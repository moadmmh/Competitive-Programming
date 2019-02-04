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
    int n;
    cin >> n;
    int min1, min2, min3, max1, max2, max3;
    cin >> min1 >> max1 >> min2 >> max2 >> min3 >> max3;
    if (min1 + min2 + min3 == n)
        return cout << min1 << " " << min2 << " " << min3 << endl, 0;
    if (max1 + max2 + max3 == n)
        return cout << max1 << " " << max2 << " " << max3 << endl, 0;

    int ans1, ans2, ans3;
    ans1 = min(max1, n - min2 - min3);
    ans2 = min(max2, n - min3 - ans1);
    ans3 = n - ans1 - ans2;
    cout << ans1 << " " << ans2 << " " << ans3 << endl;
    return 0;
}
