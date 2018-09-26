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

priority_queue<int>qq,pp;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int a;
        sf(a);
        qq.push(a);
        pp.push(-1*a);
    }

    int minim=0 ,maxim=0;
   while(n--) {
       int x = 0, y = 0;
       x = qq.top();
       qq.pop();
       maxim+=x;
       qq.push(x - 1);
       y = abs(pp.top());
       pp.pop();
       minim+=y;
       if((1-y<0))
           pp.push(1-y);
   }
   cout<<maxim<<" "<<minim<<endl;
    return 0;
}
