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
pair<int,int>mp[10];
int main() {
    //freopen("input.txt","r",stdin);
    int a[3][3];
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cin>>a[i][j];
            mp[a[i][j]]=make_pair(i,j);
        }
    }
    double last;
    for(int i=2;i<=9;++i){
        last+=sqrt(pow(mp[i].first-mp[i-1].first,2)+pow(mp[i].second-mp[i-1].second,2));
    }
    cout<<fixed<<setprecision(8)<<last<<endl;
    return 0;
}
