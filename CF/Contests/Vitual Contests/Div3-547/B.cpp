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
#define mod 1000000000
#define pi 3.1415926536
#define ex 1e18
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
int a[200005];
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    int ones = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int cnt = 0, ans = 0;
    if (a[0] == 1 and a[n - 1] == 1)
        cnt = 1;
    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1 and a[i] == 1 and a[0] == 1)
        {
            cnt += 1;
            for(int j=1;j<n;++j){
                if(a[j]==0)
                    break;
                cnt+=1;
            }
        }
        if (a[i] == 1)
        {
            cnt += 1;
            ans = max(ans, cnt);
        }
        else
        {
            cnt = 0;
        }
    }



    cout << ans << endl;
    return 0;
}
