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

int main() {
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    string s;
    bool ok=true;
    if(n&1){
        for(int i=1;i<=(n-1);i+=2){
            if(ok){s+="aa";ok=!ok;}
            else {s+="bb";ok=!ok;}
        }
        if(ok)s+="a";
        else s+="b";    
    }
    else {
        for(int i=1;i<=(n);i+=2){
            if(ok){s+="aa";ok=!ok;}
            else {s+="bb";ok=!ok;}
        }
    }
    cout<<s<<endl;  
    return 0;
}
