#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p()     printf("\n")
#define ps()    printf(" ")
#define ll long long
#define ull unsigned long long
#define mod 1e9+1
#define MAX 1000000005
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
double leng(double x,double y){
    return sqrt(x*x+y*y);
}
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    double x,y,nx,ny,tx,ty;
    int r,cnt=1,i;
    bool in;
    while(cin>>x>>y>>r){
        in=true;
        nx=0.0;
        ny=0.0;
        for( i=0;i<r;++i){
            tx=nx;
            ty=ny;
            nx=tx*tx - ty*ty + x;
            ny=2*tx*ty + y;
            if(leng(nx,ny)>2.0){
                in=false;
                break;
            }
        }
        cout<<"Case "<<cnt<<":"<<((in)?" IN":" OUT")<<endl;
        cnt+=1;
    }
    return 0;
}
