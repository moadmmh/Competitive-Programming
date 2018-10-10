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

vector<int>v1,v2;
int a[100005];

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,n1,n2;
    cin>>n>>n1>>n2;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    sort(a,a+n);
    //first way
    ll sum1=0,sum2=0;
    double val1=0.0,val2=0.0;
    for(int i=n-1;i>=n-(n1+n2);--i){
        if(i<n-n1){
            sum2+=a[i];
            continue;
        }
        sum1+=a[i];
    }
    val1=(sum1)/(n1*1.0) +sum2/(n2*1.0);
    //second way
    sum1=0,sum2=0;
    for(int i=n-1;i>=n-(n1+n2);--i){
        if(i<n-n2){
            sum1+=a[i];
            continue;
        }
        sum2+=a[i];
    }
    val2=(sum1)/(n1*1.0) +sum2/(n2*1.0);

    cout<<fixed<<max(val1,val2)<<setprecision(6)<<endl;
    return 0;
}
