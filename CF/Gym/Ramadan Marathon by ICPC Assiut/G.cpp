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

string get_it(int x){
    string ans="";
    while(x){
        int dig=x%10;
        x/=10;
        ans=char(dig+'0')+ans;
    }
    return ans;
}

int main()
{
    ll a,b;
    cin>>a>>b;
    if(a==b){
        return cout<<1<<endl,0;
    }
    string res=get_it(a-b);
    for(int i=1;i<10;++i){
        if(res[0]!=char(i+'0')){
            res[0]=char(i+'0');
            break;
        }
    }
    cout<<res<<endl;

    return 0;
}
