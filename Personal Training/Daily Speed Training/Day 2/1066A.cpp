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
int a[105][205];
int main() {
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int L,v,l,r;
        cin>>L>>v>>l>>r;
        int cnt=0;
        int x=r%v;
        cnt+=(l-1)/v + ((L-(r-x))/v);
        //cnt-=((L-(r-x))/v > 0 ? 1 :0);
        cout<<cnt<<endl;
    }
    return 0;
}
