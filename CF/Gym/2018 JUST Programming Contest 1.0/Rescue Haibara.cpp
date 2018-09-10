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

vector<pair<int,int>>v;
vector<int>u;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int T;
    cin>>T;
    while(T--){
        int n,x,y;
        cin>>n>>x>>y;
        int refr1=x,pos=0,refr2=0;
        for(int i=1;i<=n;++i){
            int d,m;
            cin>>d>>m;
            if(d>x || m<y)
                continue;

            else{
                if(d<refr1){
                    refr1=d;
                    refr2=m;
                    pos=i;
                }
                else if(d==refr1){
                    if(m>refr2){
                        refr2=m;
                        pos=i;
                    }
                }
            }
        }
        
        cout<<(pos!=0? pos :-1)<<endl;
    }
    return 0;
}
