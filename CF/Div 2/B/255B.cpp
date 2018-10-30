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
int a[5];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    string s,t;
    cin>>s;
    int x=0,y=0,n=sz(s);
    for(int i=0;i<sz(s);++i){
        if(s[i]=='x')x+=1;
        else y+=1;
    }
    if(x>y){
        int z=n-2*y;
        while(z--){
            t+='x';
        }
    }
    else{
        int z=n-2*x;
        while(z--){
            t+='y';
        }
    }
    cout<<t<<endl;
    return 0;
}
