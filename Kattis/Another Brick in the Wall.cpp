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

int a[10005];

int main()
{
    //freopen("input.txt","r",stdin);
    int h, w, n;
    cin >> h >> w >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i += 0)
    {
        int sum = 0;
        //cout<<i<<endl;
        while (sum < w and cnt != h)
        {
            //cout<<i<<endl;
            sum += a[i];
            i += 1;
            //cout<<sum<<endl;
            if (sum > w or (i == n and h != cnt and sum != w))
                return cout << "NO" << endl, 0;
            if (sum == w)
            {
                cnt += 1;
                //cout<<i<<endl;
                break;
            }
        }
        if (cnt == h)
            break;
    }
    cout << "YES" << endl;
    return 0;
}
