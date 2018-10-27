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

bool a[4001]={false};
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int x,k,cnt=0;
    cin>>x>>k;
    a[x]=true;
    while(k--){
        int idx,num1,num2;
        cin>>idx;
        if(idx ==1){
            cin>>num2>>num1;
            a[num2]=true;
            a[num1]=true;
            cnt+=2;
        }
        if(idx==2){
            cin>>num2;
            a[num2]=true;
            cnt+=1;
        }
    }
    int maxi=x-1-cnt,mini=0,ref=0;
    for(int i=1;i<x;++i){
        if(!a[i] and !a[i+1]) {
            ref += 1;
            i+=1;
        }
    }
    cout<<maxi-ref<<" "<<maxi<<endl;
    return 0;
}
