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
#define ex 1e12
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);

    int n,m,cnt=0;
    cin>>n>>m;
    while(true){
        if(n<=m and m>=2 and n>=1){
            n-=1;
            m-=2;
            cnt+=1;
        }
        else if(m<=n and n>=2 and m>=1){
            m-=1;
            n-=2;
            cnt+=1;
        }
        else
            break;
    }
    cout<<cnt<<endl;
    return 0;
}
