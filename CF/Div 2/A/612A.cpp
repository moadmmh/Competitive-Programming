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
string s;
int n,p,q;
void solve(int i,int j){
    cout<<i+j<<endl;
    int x=0;
    while(i--){
        cout<<s.substr(x,p)<<endl;
        x+=p;
    }
    while(j--){
        cout<<s.substr(x,q)<<endl;
        x+=q;
    }
}

int main(){

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);

    cin>>n>>p>>q;

    cin>>s;
    int i,j;
    for( i=0;i<n;++i){

            if((n- p*i)%q==0 and p*i<=n){
                solve(i,(n- p*i)/q);
                return 0;
            }

    }


    cout<<-1<<endl;

    return 0;
}
