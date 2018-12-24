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
int sum(int x){
    int res=0;
    while(x){
        res+=x%10;
        x/=10;    
    }
    return res;    
}
int main() {
    //freopen("input.txt","r",stdin);
    int k;
    cin>>k;
    int cnt=10;
    for(int i=0;i<k;++i){
        cnt+=9;
        if(sum(cnt)!=10){
            while(sum(cnt)!=10){
                cnt+=1;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
