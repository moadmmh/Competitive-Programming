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

int cnt=0;
int n,m,k;
char a[2005];
int data[2005][2005],sumr[2005][2005],sumc[2005][2005];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);

    cin>>n>>m>>k;
    for(int i=1;i<=n;++i){
        scanf("%s",a+1);
        for (int j=1;j<=m;++j){
            if(a[j]=='.')
                data[i][j]=1;
            else
                data[i][j]=0;
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            sumr[i][j]=sumr[i][j-1]+data[i][j];
        }
    }
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            sumc[i][j]=sumc[i][j-1]+data[j][i];
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=k;j<=m;++j){
            if(sumr[i][j]-sumr[i][j-k]==k){
                cnt+=1;
                //cout<<"r"<<endl;
            }
        }
    }
    for(int i=1;i<=m;++i){
        for(int j=k;j<=n;++j){
            if(sumc[i][j]-sumc[i][j-k]==k){
                cnt+=1;
                //cout<<"c"<<endl;
            }
        }
    }
    if (k==1)cnt/=2;
    cout<<cnt<<endl;
    return 0;
}
