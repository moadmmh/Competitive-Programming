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
vector<string>A,B;
set<string>st;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    int n,m;
    string s,t;
    int cnt=1;
    
    while(T--){
        A.clear();
        B.clear();
        st.clear();
        sf(n);sf(m);
        getline(cin,s);
        for(int i=1;i<=n;++i){
            getline(cin,s);
            A.pb(s);
        }
        for(int i=1;i<=m;++i){
            getline(cin,s);
            B.pb(s);
        }
        for(int i=0;i<sz(A);++i){
            for(int j=0;j<sz(B);++j){
                t=A[i]+B[j];
                st.insert(t);
            }
        }
        cout<<"Case "<<cnt<<": "<<sz(st)<<endl;
        cnt+=1;
    }
    return 0;
}
