#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p() 	printf("\n")
#define ps() 	printf(" ")
#define ll long long
#define ull unsigned long long
#define mod 1e9+1
#define MAX 1000000005
#define pi 3.1415926536
#define ex 1e12
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

int a[200005];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,med;
    cin>>n>>med;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    sort(a,a+n);
    int idx=(n+1)/2;
    ll cnt=0;
    cnt=abs(a[idx-1]-med);
    if(cnt==0){
        cout<<0<<endl;
        return 0;
    }
    else if(a[idx-1]>med){
        //path 1 (decrease nbrs before median to med value)
        for(int i=idx-2;i>=0;--i){
            if(a[i]>med)
                cnt+=abs(med-a[i]);
            else break;
        }
    }
    else {

        for(int i=idx;i<n;++i){
            if(a[i]<med)
                cnt+=abs(med-a[i]);
            else
                break;
        }
    }
    //cnt+=min(cnt1,cnt2);
    cout<<cnt<<endl;
    return 0;
}
