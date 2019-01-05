
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
int check(string s){
    int cnt=0;
    for(int i=0;i<sz(s);++i){
        if(s[i]=='4' or s[i]=='7')
            cnt+=1;
    }
    return cnt;
}
int main() {
    //freopen("input.txt","r",stdin);
    int n,t,cnt=0;
    cin>>n>>t;
    string s;
    for(int i=0;i<n;++i){
        cin>>s;
        if(check(s)<=t)
            cnt+=1;
    }
    cout<<cnt<<endl;
    return 0;
}
