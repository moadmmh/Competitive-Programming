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

int a[105];
vector<pair<int,int>>v;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,count=0,sum=0;
    cin>>n;
    for(int i=0;i<n;++i){
        sf(a[i]);
        sum+=a[i];
    }
    if(sum!=0){
        cout<<"YES"<<endl;
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return 0;
    }
    if(sum==0){
        for(int i=0;i<n;++i){
            if(a[i]!=0){
                cout<<"YES"<<endl;
                cout<<"2"<<endl;
                cout<<1<<" "<<i+1<<endl;
                cout<<i+2<<" "<<n<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
