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
int tostr(string s){
    int re=0;
    for(int i=0;i<sz(s);++i){
        re=(re*10)+(s[i]-'0');
    }
    return re;
}

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string st,en;
    cin>>st>>en;
    int hrs,mint,sec;
    hrs=tostr(en.substr(0,2))-tostr(st.substr(0,2));
    mint=tostr(en.substr(3,2))-tostr(st.substr(3,2));
    sec=tostr(en.substr(6,2))-tostr(st.substr(6,2));
    if(sec<0){mint-=1;sec+=60;}
    if(mint<0){hrs-=1;mint+=60;}
    hrs+=(hrs<0)?24:0;
    if(hrs==0 and mint==0 and sec==0){
        cout<<"24:00:00"<<endl;
        return 0;
    }
    (hrs<10)?cout<<"0"<<hrs<<":":cout<<hrs<<":";
    (mint<10)?cout<<"0"<<mint<<":":cout<<mint<<":";
    (sec<10)?cout<<"0"<<sec:cout<<sec;
    p();
    return 0;
}
