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
    int a,b,cnt=0;
    cin>>a>>b;
    while(a>0 and b>0){
        if(a==1 and b==1)
            break;
        else if(a==1){
            a+=1;
            b-=2;
        }
        else if (b==1){
            b+=1;
            a-=2;
        }
        else if(a<b){
            a+=1;
            b-=2;
        }
        else {
            b+=1;
            a-=2;
        }
        cnt+=1;
    }
    cout<<cnt<<endl;
    return 0;
}
