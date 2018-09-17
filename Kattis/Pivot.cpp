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

int a[1000005];
int minim[1000005],maxim[1000005];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    int mini=a[n-1],maxi=a[0];
    minim[n-1]=mini;
    maxim[0]=maxi;
    for(int i=1;i<n;++i){
        if(a[i]>maxi){
            maxi=a[i];
        }
        maxim[i]=maxi;
    }
    for(int i=n-2;i>=0;--i){
        if(a[i]<mini){
            mini=a[i];
        }
        minim[i]=mini;
    }
    int cnt=0;
    if(a[0]<minim[1]){
        cnt+=1;
    }
    for(int i=1;i<n-1;++i){
        if(a[i]>maxim[i-1] and a[i]<minim[i+1]){
            cnt+=1;
        }
    }
    if(a[n-1]>maxim[n-2]){
        cnt+=1;
    }
    cout<<cnt<<endl;
    return 0;
}
