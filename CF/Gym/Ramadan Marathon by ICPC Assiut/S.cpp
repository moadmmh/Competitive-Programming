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

char a[2001][2001];
int n, m;
bool check(int x, int y)
{
    if (x + 16 > n or y + 16 > m)
        return false;
    for (int i = 0; i < 16; ++i)
    {
        for (int j = 0; j < 16; ++j)
        {
            //cout<<i<<" "<<j<<endl;
            if (i % 2 == 0)
            {
                //WBWBWBWBWB...
                if (j % 2 == 0)
                {
                    if (a[x + i][y + j] != 'W')
                    {
                        return false;
                    }
                }
                else
                {
                    if (a[x + i][y + j] != 'B')
                        return false;
                }
            }
            else
            {
                //BWBWBWBWBW...
                if (j % 2 == 0)
                {
                    if (a[x + i][y + j] != 'B')
                        return false;
                }
                else
                {
                    if (a[x + i][y + j] != 'W')
                        return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] == 'W')
            {
                if (check(i, j))
                    cnt += 1;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
