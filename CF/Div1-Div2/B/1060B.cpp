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

ll toint(string s){
    ll sum=0;
    for(int i=0;i<sz(s);++i){
        sum=sum*10+(s[i]-'0');
    }
    return sum;
}
int sumdigit(ll x){
    int tot=0;
    while(x){
        tot+=x%10;
        x/=10;
    }
    return tot;
}
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    string s,t;
    cin>>s;
    int i=1;
    while(i<sz(s)){
        i+=1;
        t+='9';
    }
    t+=(char((s[0]-'0')-1)+'0');
    reverse(all(t));
    cout<<sumdigit(toint(t))+sumdigit(toint(s)-toint(t))<<endl;
    return 0;
}
