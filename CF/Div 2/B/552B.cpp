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
vector<ll>v;
void generate(){
    ll st=9;
    v.pb(st);
    int p=1;
    for(ll i=99;i<=999999999;i=(i*1LL*10)+9){
        st+=(i-pow(10,p)+1)*1LL*(p+1);
        p+=1;
        v.pb(st);
    }
    v.pb(v[sz(v)-1]+10);
}
int power(int x,int p){
    if(p==0) return 1;
    return x*power(x,p-1);
}
int main(){

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,x=0;
    cin>>n;
    if(n<10){
        return pf(n),0;
    }
    generate();
    x=n;
    int cnt=0;
    while(x!=0){
        cnt+=1;
        x/=10;
    }
    ull ans=0;
    int ps=power(10,(cnt-1));
    //cout<<n<<" "<<ps<<endl;
    ans=(n-ps+1)*1LL*cnt+ v[cnt-2];
    //cout<<cnt<<" "<<v[cnt-2]<<endl;
    cout<<ans<<endl;

    return 0;
}
