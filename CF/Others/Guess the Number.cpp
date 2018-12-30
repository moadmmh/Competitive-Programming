#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d\n", n)
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
    int l,r,mid;
    l=1,r=1000000;
    //char s[3];
    string s;
    while(l<r){
        mid=(r-l+1)/2+l;
        pf(mid);
        fflush(stdout);
        cin >> s;
        if(s==">="){
            l=mid;
        }
        else {
            r=mid-1;
        }
    }
    cout<<"! "<<r<<endl;
    return 0;

}
