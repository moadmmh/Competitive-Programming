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

int a[1005],b[1005],c[1005];
pair<int,int>p[1005];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    for(int i=0;i<n;++i){
        sf(b[i]);
    }
    int cnt=1002;
    for(int i=0;i<n;++i){
        cnt=min(cnt,b[i]/a[i]);
    }
    for(int i=0;i<n;++i){
        p[i]=make_pair(a[i],b[i]-(cnt*a[i]));
    }
    sort(p,p+n);

    bool boleh=true;

    while(k!=0){
        for(int i=0;i<n;++i){
            if(p[i].first>p[i].second and (p[i].first-p[i].second<=k)){
                k-=(p[i].first-p[i].second);
                p[i].second=0;
                continue;
            }
            else if(p[i].second >= p[i].first){
                p[i].second-=p[i].first;
            }
            else if(p[i].second <p[i].first and (k<p[i].first - p[i].second)) {
                boleh=false;
                break;
            }
        }
        if(!boleh){
            break;
        }
        else {
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
