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
#define ex 1e12
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()


int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    string s;
    int n,k,val=0;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<len(s);++i){
        if(s[i]=='.'){
            int r=i+1;
            while(r<len(s)){
                if(s[r]=='.')
                    r+=1;
                else
                    break;
            }
            val+=(r-i)-1;
            i=r-1;
        }
    }
    while(k--){
        int x; char c;
        scanf("%d %c",&x,&c);
        if(s[x-1]=='.' and c!='.'){
            if(x<len(s) and s[x]=='.')
                val-=1;
            if(x-1>0 and s[x-2]=='.')
                val-=1;
            s[x-1]=c;
        }
        if(s[x-1]!='.' and c=='.'){
            if(x<len(s) and s[x]=='.')
                val+=1;
            if(x-1>0 and s[x-2]=='.')
                val+=1;
            s[x-1]='.';
        }
        cout<<val<<endl;
    }
    return 0;
}
