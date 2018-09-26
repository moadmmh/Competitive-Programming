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

int a[100006],b[100005],c[10005];

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    b[0]=a[0];
    for(int i=1;i<n;++i){
        b[i]+=a[i]+b[i-1];
    }
    int sum=b[n-1];
    if(sum&1){
        return pf(0),0;
    }
    int cnt =0;
    for(int i=0;i<n-1;++i){
        if(b[i]==sum/2){
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
