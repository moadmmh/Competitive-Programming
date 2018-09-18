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
int MAXI=10000005;
map<string,int>mp;
int getprice(string s,string t){
    if(mp[s] and mp[t]){
        return mp[s]+mp[t];
    }
    return MAXI;
}

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int y;  string s;
        cin>>y>>s;
        sort(all(s));
        if(!mp[s]){
            mp[s]=y;
        }
        else {
            mp[s]=min(mp[s],y);
        }
    }
    int result =MAXI;
    if(mp["A"] and mp["B"] and mp["C"]){
        result=mp["A"]+mp["B"]+mp["C"];
    }
    if(mp["ABC"]){
        result=min(result,mp["ABC"]);
    }
    result=min(result,getprice("AC","AB"));
    result=min(result,getprice("AC","BC"));
    result=min(result,getprice("AB","BC"));
    result=min(result,getprice("A","BC"));
    result=min(result,getprice("B","AC"));
    result=min(result,getprice("C","AB"));

    cout<<(result==MAXI ? -1 :result)<<endl;
    return 0;
}
