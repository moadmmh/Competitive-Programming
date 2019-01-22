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
#define len(s)   (int)s.length()
#define sz(x)    (int)x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()
int getsum(ll x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main() {
    //freopen("input.txt","r",stdin);
    int n;
    while(cin>>n and n){
        for(int i=11;i<=1000000;++i){
            if(getsum(n)==getsum(n*i)){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}   
