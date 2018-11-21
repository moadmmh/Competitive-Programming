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

int a[200005],b[200005];
stack<int>st;
bool tkn[200005]={false};
vector<int>v;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    for(int i=n-1;i>=0;--i){
        st.push(a[i]);
    }
    for(int i=0;i<n;++i){
        sf(b[i]);
    }

    for(int i=0;i<n;++i){
        if(tkn[b[i]] or st.empty()){
            v.pb(0);
        }
        else if(b[i]==st.top() ){
            tkn[b[i]]=true;
            st.pop();
            v.pb(1);
        }
        else if(b[i]!=st.top() and !tkn[b[i]]){

            int x=0;
            while(!st.empty()){
                if(st.top()==b[i]){
                    tkn[b[i]]=true;
                    st.pop();
                    v.pb(x+1);
                    break;
                }
                else {
                    x+=1;
                    tkn[st.top()]=true;
                    st.pop();
                }
            }
        }

    }

    for(int i=0;i<n;++i){
        cout<<v[i]<<" ";
    }
    return 0;
}
