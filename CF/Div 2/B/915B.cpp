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


int main(){

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,pos,l,r;
    cin>>n>>pos>>l>>r;
    if(l==1 and r==n){
        return pf(0),0;
    }
    if(l==1 ){
        cout<<abs(r-pos)+1<<endl;
        return 0;
    }
    if(r==n){
        cout<<abs(pos-l)+1<<endl;
        return 0;
    }
    if(pos>=l and pos<=r){
        cout<<2+(min(pos-l,r-pos)+r-l)<<endl;
        return 0;
    }
    if(pos<l){
        cout<<2+(l-pos+r-l)<<endl;
        return 0;
    }
    if(pos>r){
        cout<<2+pos-r+r-l<<endl;
        return 0;
    }

    //int cnt1=0,cnt=0;

    return 0;
}
