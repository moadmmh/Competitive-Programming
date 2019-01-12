#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d\n", n)
#define p() 	printf("\n")
#define ps() 	printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000000000
#define pi 3.1415926536
#define ex 1e9
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

int main() {
    //freopen("input.txt","r",stdin);
    int q;
    cin>>q;
    while(q--){
        int l,r,d;
        cin>>l>>r>>d;
        int x=l%d,y=r%d;
        if(l>d){
            cout<<d<<endl;
        }
        else {
            cout<<r-y+d<<endl;
        }
    }
}
