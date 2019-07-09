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
#define mod 1000 * 1000 * 1000 + 7
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
#define F first
#define S second

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;

int hor[1005], x[1005], vis[1005];
vector<int> grp[1005];

int main()
{
    int n, h, l;
    cin >> n >> h >> l;
    queue<int> q;
    for (int i = 0; i < n; ++i)
        hor[i] = INF;
    for (int i = 0; i < h; ++i)
    {
        cin >> x[i];
        hor[x[i]] = 0;
        vis[x[i]] = 1;
        q.push(x[i]);
    }
    for (int i = 0; i < l; ++i)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        grp[a].pb(b);
        grp[b].pb(a);
    }
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (auto n : grp[curr])
        {
            if (!vis[n] and hor[n])
            {
                vis[n] = 1;
                hor[n] = hor[curr] + 1;
                q.push(n);
                //cout<<"adding ->>"<<n<<"and hor->>"<<hor[n]<<endl;
            }
            /*else if (hor[n] and vis[n] and hor[n] < hor[curr] + 1){
                hor[n] = hor[curr] + 1;
                cout<<n<<"<<-- updated from ->>"<<curr<<endl;
            }*/
        }
    }
    int ans = -1, idx = 0;
    for (int i = 0; i < n; ++i)
    {
        if (hor[i] > ans)
        {
            ans = hor[i];
            idx = i;
        }
        //cout<<i<<"->>"<<hor[i]<<endl;
    }
    cout << idx << endl;
    return 0;
}
