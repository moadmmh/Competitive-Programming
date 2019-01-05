
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
    string s;
    cin>>s;
    for(int i=0;i<sz(s)-1;++i){
        if(s[i]=='s' and s[1+i]=='s'){
            cout<<"hiss"<<endl;
            return 0;
        }
    }
    cout<<"no hiss"<<endl;
    return 0;
}
