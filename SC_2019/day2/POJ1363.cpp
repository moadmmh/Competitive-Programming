//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
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
#define clr(x) x.clear()
#define LOG(x) std::cout << x << std::endl;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = 3.14159265359;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int a[1005];
int in[1005];
stack<int> st;

int main()
{
    int n;
    while (cin >> n and n)
    {
        while (cin >> a[0] and a[0])
        {
            bool flag = false;
            while (!st.empty())
                st.pop();

            for (int i = 1; i < n; ++i)
            {
                cin >> a[i];
            }
            int curr = 1;
            for (int i = 0; i < n; ++i)
            {
                if (!st.empty() and st.top() == a[i])
                    st.pop();
                else
                {
                    //fill
                    for (int j = curr; j <= n; ++j)
                    {
                        if (j == a[i])
                        {
                            curr = j + 1;
                            break;
                        }
                        st.push(j);
                    }
                }
            }
            cout << (st.empty() ? "Yes" : "No") << endl;
        }
        cout << endl;
    }
    return 0;
}
