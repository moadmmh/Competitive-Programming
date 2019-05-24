#include <bits/stdc++.h>

using namespace std;
#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000 * 1000 * 100 + 7
#define pi 3.1415926536
#define ex 1e18
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int cnta,cntb;

int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<sz(a);++i){
        if(a[i]=='1')
            cnta+=1;
    }
    int diff = abs(sz(b)-sz(a));
    if(sz(a)<sz(b)){

        cout<<b.substr(0,diff);
        cout<<1;
        cnta--;
        for(int i=diff+1;i<sz(b);++i){
            if(cnta and b[i]=='0'){
                cnta--;
                cout<<'1';
                continue;
            }
            cout<<b[i];
        }
    }
    else if(sz(b)<sz(a)) {
        cout<<1;
        cnta--;
        for(int i=1;i<diff;++i){
            if(cnta){
                cout<<1;
                cnta--;
                continue;
            }
            cout<<0;
        }
        for(int i=0;i<sz(b);++i){
            if(b[i]=='0' and cnta){
                cout<<1;
                cnta--;
                continue;
            }
            cout<<b[i];
        }
    }
    else {
        cout<<1;
        cnta--;
        for(int i=1;i<sz(b);++i){
            if(b[i]=='0' and cnta){
                cout<<1;
                cnta--;
                continue;
            }
            cout<<b[i];
        }
    }
    p();
    return 0;
}
