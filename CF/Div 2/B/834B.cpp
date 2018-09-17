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

int op[27]={0},cl[27]={0};
int x[1000005]={0};
bool opp[27]={false},cll[27]={false};
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<len(s);++i){
        if(op[s[i]-'A']==0 and !opp[s[i]-'A']){
            op[s[i]-'A']=i;
            opp[s[i]-'A']=true;
        }
    }
    for(int i=n-1;i>=0;--i){
        if(cl[s[i]-'A']==0 and !cll[s[i]-'A']){
            cl[s[i]-'A']=i;
            cll[s[i]-'A']=true;
        }
    }
    for(int i=0;i<27;++i){
        if(opp[i]){
            x[op[i]]+=1;
        }
        if(cll[i]){
            x[cl[i]+1]-=1;
        }
        //cout<<op[i]<<" "<<cl[i]<<endl;
    }
    for(int i=1;i<len(s);++i){
        x[i]+=x[i-1];
    }

    for(int i=0;i<len(s);++i){
        if(x[i]>k){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
