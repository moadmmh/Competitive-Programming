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



int main()
{
    //freopen("input.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    int c1=2,c2=5,c3=8;
    c1*=n;
    c2*=n;
    c3*=n;
    int ans=0;
    ans+=(c1%k==0?c1/k:c1/k +1);
    ans+=(c2%k==0?c2/k:c2/k +1);
    ans+=(c3%k==0?c3/k:c3/k +1);
    cout<<ans<<endl;
    return 0;
}
