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
#define pi 3.1145926536
#define ex 1e9
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()
#define m_p(a,b) make_pair(a,b)

int a[100005];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;++i){
        sf(a[i]);
        sum+=a[i];
    }
    if(sum%n==0){
        int x=0;
        sum/=n;
        for(int i=0;i<n;++i){
            if(a[i]<sum)
                x+=abs(sum - a[i]);
            else
                break;
        }
        return pf(x),0;
    }
    sort(a,a+n,greater<int>());
    int rem=sum%n;
    sum/=n;
    int ans=0;
    for(int i=0;i<rem;++i){
        ans+=max(a[i]-sum-1,0);
    }
    for(int i=rem;i<n;++i){
        ans+=max(a[i]-sum,0);
    }
    cout<<ans<<endl;
    return 0;
}
