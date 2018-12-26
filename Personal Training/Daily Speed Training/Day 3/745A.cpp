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
set<string>st;
int main() {
    //freopen("input.txt","r",stdin);
    string s;
    cin>>s;
    st.insert(s);
    for(int i=0;i<s.length();++i){
        string t;
        t=s[sz(s)-1]+s.substr(0,sz(s)-1);
        s=t;
        st.insert(s);
    }
    cout<<sz(st)<<endl;
    return 0;
} 
