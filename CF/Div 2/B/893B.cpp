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

int power(int a,int k){
    if(k==0)return 1;
    return a*power(a,k-1);
}

void generate(){
    for(int i=1;i<=100;++i){
        int x=power(2,i-1)*(power(2,i)-1);
        v.pb(x);
    }
}
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,ans=0;
    cin>>n;
    generate();
    for(int i=0;v[i]<=n;++i){
        if(n%v[i]==0)
            ans=v[i];
    }
    cout<<ans<<endl;
    return 0;
}
