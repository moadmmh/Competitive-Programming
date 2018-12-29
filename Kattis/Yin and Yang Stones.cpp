#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p()     printf("\n")
#define ps()    printf(" ")
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
int b,w;
int main() {
    //freopen("input.txt","r",stdin);
    string s;
    cin>>s;
    for(int i=0;i<sz(s);++i){
        if(s[i]=='B')
            b++;
        else 
            w++;
    }
    bool ok=false;
    if(s[0]=='B' and !ok){
        if(w-1==b-1){
            ok=1;
        }
    }
    if(s[0]=='W' and !ok){
        if(b-1==w-1){
            ok=1;
        }
    }
    if(s[sz(s)-1]=='W' and !ok){
        if(b-1==w-1){
            ok=1;
        }
    }
    if(s[sz(s)-1]=='B' and !ok){
        if(w-1==b-1){
            ok=1;
        }
    }
    if(ok){pf(1);}
    else 
        pf(0);
    return 0;
}
