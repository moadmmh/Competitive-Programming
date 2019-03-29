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

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    if(m%n!=0)
        return cout<<-1<<endl,0;
    int t=m/n;
    while(t%2==0){
        t/=2;
        cnt+=1;
    }
    while(t%3==0){
        t/=3;
        cnt+=1;
    }
    if(t==1)
        cout<<cnt<<endl;

    else
        cout<<-1<<endl;
    return 0;
}
