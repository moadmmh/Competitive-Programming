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
string s;
vector<string>v;
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    for(int i=0;i<=n;++i){
        for(int j=0;j<=n-i-1;++j)
            cout<<"  ";
        for(int j=0;j<=i;++j)
            cout<<((j==0)?"":" ")<<j;
        for(int j=i-1;j>=0;--j)
            cout<<' '<<j;
        p();
    }
    for(int i=n-1;i>=0;--i){
        for(int j=0;j<=n-i-1;++j)
            cout<<"  ";
        for(int j=0;j<=i;++j)
            cout<<((j==0)?"":" ")<<j;
        for(int j=i-1;j>=0;--j)
            cout<<' '<<j;
        p();
    }
    return 0;
}   
