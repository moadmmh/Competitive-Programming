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
int a[55];
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    int a,b,c;
    while(n--){
        cin>>a>>b>>c;
        x+=a;   y+=b;   z+=c;
    }
    
    if(!x and !y and !z)
        return cout<<"YES"<<endl,0;
    cout<<"NO"<<endl;
    return 0;
}   
