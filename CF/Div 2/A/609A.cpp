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
int a[105];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,m,cnt=0,sum=0;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;++i)
        cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=0;--i){
     if(sum<m){
         sum+=a[i];
         cnt+=1;
     }
     else
         break;
    }
    cout<<cnt<<endl;
    return 0;
}
