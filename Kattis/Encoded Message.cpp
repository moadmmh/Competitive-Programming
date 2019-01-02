#include<bits/stdc++.h>
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
int E[1005],C[1005];
int main() {
    //freopen("input.txt","r",stdin);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int n=sqrt(int(sz(s)));
        char a[n][n];
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                a[i][j]=s[n*i+j];
            }
        }
        for(int i=n-1;i>=0;--i){
            for(int j=0;j<n;++j){
                cout<<a[j][i];
            }
        }
        p();
    }
    return 0;
}
