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
int sum(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
vector<int>ans;
int main() {
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    for (int i=1;i<=min(n,81);++i){
        if(sum(n-i)==i){
            ans.pb(n-i);
        }
    }
    sort(all(ans));
    cout<<sz(ans)<<endl;
    for(int i=0;i<sz(ans);++i){
        cout<<ans[i]<<endl;
    }
    return 0;
}
