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
int n,m;
int grp[4005][4005];
int a[4005];

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout); 
    cin>>n>>m;
    int x,y;
    memset(grp,0,sizeof grp);
    for(int i=0;i<m;++i){
        cin>>x>>y;
        grp[x][y]=1;
        grp[y][x]=1;
        a[x]+=1;
        a[y]+=1;
    }
    bool found=false;
    int ans=MAX;
    for(int i=1;i<=n;++i){
        for(int j=i+1;j<=n;++j){
            if(grp[i][j] and grp[j][i]){
                for(int k=j+1;k<=n;++k){
                      if(grp[i][k] and grp[j][k]){
                          found=true;
                          ans=min(a[i]+a[j]+a[k]-6,ans);
                      }  
                }
            }
        }
    }
    cout<<(found ? ans : -1)<<endl;
    return 0;
}
