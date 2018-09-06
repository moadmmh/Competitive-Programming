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
bool check (int x){
    int cnt=0;
    while(x!=0){
        cnt+=x%10;
        x/=10;
        if(cnt>10)
            return false;
    }
    if(cnt==10)return true;
    return false ;
}
void generate(){
    for(int i=19;i<=10900000;++i){
        if(check(i)){
            v.pb(i);
        }
    }
}

int main(){

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    generate();
    cout<<v[n-1]<<endl;

    return 0;
}
