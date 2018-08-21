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
vector<int>v;
void generate(){
    ll sum=0;
    for(int i=1;i<10000001;++i){
        sum+=i+1;
        v.pb(sum);
    }
}

int main(){

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int h,m;
    char c;
    cin>>h>>c>>m;
    int a;
    cin>>a;
    h=(h+((a+m)/60))%24;
    m=(m+a)%60;
    if(h<10){
        cout<<0<<h;
    }
    else
        cout<<h;
    cout<<":";
    if(m<10){
        cout<<0<<m;
    }
    else
        cout<<m<<endl;
    return 0;
}
