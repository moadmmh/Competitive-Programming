#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
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

vector<int>v;

void counting(int n){
    v.pb(n);
    if(n==1)
        return;
    if(n&1)
        counting(3*n+1);
    else
        counting(n/2);
}
  
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int i,j;
    while(cin>>i>>j) {
        int x=i,y=j;
        if(i>j) {
            x=j;
            y=i;
        }
        int ans = 0;
        for (int idx = x; idx <= y; ++idx) {
            counting(idx);
            ans = max(ans, (int) sz(v));
            v.clear();
        }
        cout << i << " " << j << " " << ans << endl;
    }
    return 0;
}
