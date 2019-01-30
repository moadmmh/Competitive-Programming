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

vector<int> v;

int main()
{
    //freopen("input.txt","r",stdin);
    vector<int> v;
    string s;

    int m = 0;
    while (getline(cin, s))
    {
        int temp = s.length();
        m = max(temp, m);
        v.push_back(temp);
    }

    int total = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        total += pow(abs(m - v[i]), 2);
    }

    cout << total << endl;
    return 0;
}
