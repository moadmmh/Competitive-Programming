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
vector<vector<int>>grp;
bool taken [1005],leaf[1005];
int main() {
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    grp.resize(n+1);
    for(int i=0;i<n-1;++i){
        int x;
        sf(x);
        grp[x].pb(i+2);
        taken[x]=1;
    }
    for(int i=1;i<=n;++i){
        
        if(taken[i]){
            int cnt=0;
            if(grp[i].size()>=3){
                for(int j=0;j<grp[i].size();++j){
                    if(taken[grp[i][j]]){
                        continue;
                    }
                    cnt+=1;
                }
                if(cnt<3){
                    return cout<<"No"<<endl,0;    
                }
            }
            else {
                return cout<<"No"<<endl,0;
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
