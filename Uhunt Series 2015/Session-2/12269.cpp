#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p() 	printf("\n")
#define ps() 	printf(" ")
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
vector<float>x,y;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int nx,ny;
    double w;
    cin>>nx>>ny>>w;
    do{
        x.clear();
        y.clear();
        while(nx--){
            double xx; cin>>xx;
            x.pb(xx);
        }
        while(ny--){
            double xx; cin>>xx;
            y.pb(xx);
        }
        sort(all(x));
        sort(all(y));
        bool st=true,nd=true;
        if(x[0]>w/2 or (75-x[sz(x)-1])>w/2){
            st=false;
            //cout<<"first wrong !!"<<endl;
        }
        for(int i=0;i<sz(x)-1;++i){
            if(x[i]+w<x[i+1]){
                st=false;
                //cout<<"first wrong !"<<endl;
                break;
            }
        }
        if(y[0]>w/2 or (100-y[sz(y)-1])>w/2){
            nd=false;
            //cout<<"second wrong !!"<<endl;
        }
        for(int i=0;i<sz(y)-1;++i){
            if(y[i]+w <y[i+1]){
                nd=false;
                //cout<<"second wrong !"<<endl;
                break;
            }
        }
        if(!nd or !st){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
        cin>>nx>>ny>>w;
    }while(nx and ny and w);

    return 0;
}
