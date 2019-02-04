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

bool triangle (int x,int y,int z){
    if(x+y>z and x+z>y and z+y>x)
        return true;
    return false;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int a[4];
    for(int i=0;i<4;++i)
        cin>>a[i];
    
    if(triangle(a[0],a[1],a[2]) or triangle(a[0],a[1],a[3]) or triangle(a[0],a[2],a[3]) or triangle(a[2],a[1],a[3]))
        return cout<<"TRIANGLE"<<endl,0;
    
    sort(a,a+4);
    
    if(a[0]+a[1]==a[2] or a[0]+a[1]==a[3] or a[0]+a[2]==a[3] or a[2]+a[1]==a[3])
        return cout<<"SEGMENT"<<endl,0;
    
    cout<<"IMPOSSIBLE"<<endl;
    
    return 0;
}
