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

int a[100005];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    string s;
    cin>>s;
    s="a"+s;
    int n;
    cin>>n;
    for(int i=1;i<len(s);++i){
        if(s[i]==s[i-1]){
            a[i]+=1;
        }
    }
    for(int i=1;i<len(s);++i){
        a[i]+=a[i-1];
    }
    while(n--){
        int l,r;
        sf(l);sf(r);
        cout<<a[r]-a[l]<<endl;
    }
    return 0;
}
