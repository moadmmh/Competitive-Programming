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

int a[105];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    if(n==1){
        cout<<"0"<<endl;
        return 0;
    }
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    if(a[n-1]==n){
        cout<<n-1<<endl;
        return 0;
    }
    int ans,res=0;
    int b[105];
    for(int i=0;i<n;++i){
        ans=0;
        for(int j=i;j<n;++j){
            if(a[j+1]-a[j]==1)
                ans+=1;
            else
                break;
        }
        res=max(ans,res);
    }
    res-=1;
    ans=0;
    bool ins=false;
    if(a[n-1]==1000){
        int i=1;
        while(a[n-i]==a[n-1-i]+1 and n-1-i>=0){
            ans+=1;
            i+=1;
        }
        ins=true;
    }
    if(ins){
        res=max(ans,res);
    }
    bool inss=false;
    int cnt=0;
    if(a[0]==1){
        int i=1;
        while(a[i]==i+1 and i<n){
            cnt+=1;
            i+=1;
        }
        inss=true;
    }

    if(inss){
        res=max(res,cnt);
    }
    cout<<(res>0?res:0)<<endl;
    return 0;
}
