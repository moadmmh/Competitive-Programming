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
int b[101],g[101];
bool bt[101],gt[101];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,m;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>b[i];
    }
    cin>>m;
    for(int i=0;i<m;++i){
        cin>>g[i];
    }
    sort(b,b+n);
    sort(g,g+m);
    int cnt=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(abs(b[i]-g[j])<=1 and !bt[i] and !gt[j]){
                bt[i]=1;
                gt[j]=1;
                cnt+=1;
                break;
            }
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(abs(b[j]-g[i])<=1 and !bt[j] and !gt[i]){
                bt[j]=1;
                gt[i]=1;
                cnt+=1;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
