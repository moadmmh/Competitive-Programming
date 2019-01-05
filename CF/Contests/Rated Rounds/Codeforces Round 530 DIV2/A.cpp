
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
    int w,h;
    cin>>w>>h;
    pair<int,int>p[2];
    cin>>p[0].second>>p[0].first;
    cin>>p[1].second>>p[1].first;
    sort(p,p+2);
    bool fst=false;
    for(int i=h;i>=0;--i){
        w+=i;
        if(!fst){
            if(i==p[1].first){
                w-=p[1].second;
                fst=true;    
            }
            if(w<0)
                w=0;
        }
        else {
            if(i==p[0].first){
                w-=p[0].second;
            }
            if(w<0)
                w=0;
        }
    }
    cout<<w<<endl;
    return 0;
}
