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

int count(int nbr)
{
    int cnt = 0;
    for (int i = 0; i <= 31; ++i)
    {
        int x = pow(2, i);
        if (nbr & x)
            cnt += 1;
    }
    return cnt;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ansa = count(a);
    int ansb = count(b);
    cout << (ansa > ansb ? "Hussien" : "Ayman") << endl;
    return 0;
}
