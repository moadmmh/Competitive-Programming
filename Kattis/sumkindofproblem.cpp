#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p()     printf("\n")
#define ps()    printf(" ")
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


int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int p;
    cin>>p;
    while(p--){
        int k,n;
        cin>>k>>n;
        int s1=0,s2=0,s3=0;
        int a1=n,a2=n,a3=n;
        int x=1;
        while(a1!=0 || a2!=0 || a3!=0){
            if( a1!=0){
                s1+=x;
                a1-=1;
            }
            if(x&1 and a2!=0){
                s2+=x;
                a2-=1;
            }
            if(x%2==0 and a3!=0){
                s3+=x;
                a3-=1;
            }
            x+=1;
        }
        cout<<k<<" "<<s1<<" "<<s2<<" "<<s3<<endl;
    }
    return 0;
}
