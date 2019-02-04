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

vector<int> armym, armyg;

int main()
{
    //freopen("input.txt","r",stdin);
    int T;
    cin >> T;
    while (T--)
    {
        armyg.clear();
        armym.clear();
        int g, m;
        cin >> g >> m;
        for (int i = 0; i < g; ++i)
        {
            int x;
            sf(x);
            armyg.pb(x);
        }
        for (int i = 0; i < m; ++i)
        {
            int x;
            sf(x);
            armym.pb(x);
        }
        sort(all(armyg));
        sort(all(armym));
        int cntg = 0, cntm = 0;
        while (cntg < g and cntm < m)
        {
            if (armyg[cntg] < armym[cntm])
                cntg += 1;
            else
                cntm += 1;
        }
        int rstg, rstm;
        rstg = g - cntg;
        rstm = m - cntm;
        cout << (rstg > rstm ? "Godzilla" : "MechaGodzilla") << endl;
    }
    return 0;
}
