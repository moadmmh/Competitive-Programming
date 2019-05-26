#include <bits/stdc++.h>

using namespace std;
#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000 * 1000 * 100 + 7
#define pi 3.1415926536
#define ex 1e18
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
int n, m;
double arr[1005];
int dp[1005][1005];
int lis(int i, int prev)
{
    //cout<<i<<"->>>"<<prev<<endl;
    if (i == n)
    {
        return 0;
    }
    if (dp[i][prev] != -1)
        return dp[i][prev];

    if (arr[i]>=arr[prev])
    {
        //cout<<"here"<<endl;
        dp[i][prev] = max(lis(i + 1, i) + 1,lis(i+1,prev));
        return dp[i][prev];
    }
    else
    {   //cout<<"ok"<<endl;
        dp[i][prev] = lis(i + 1, prev);
        return dp[i][prev];
    }
}

int main()
{
    memset(dp, -1, sizeof dp);
    cin >> n >> m;
    int ans = 0;
    double prev = 0;
    for (int j = 0; j < n; ++j)
    {
        double curr = 0.0;
        for (int i = 0; i < m; ++i)
        {
            int x;
            sf(x);
            curr += double(log(x));
        }
        arr[j] = curr;
    }

    ans = lis(0, n);
    cout << ans << endl;
    return 0;
}
