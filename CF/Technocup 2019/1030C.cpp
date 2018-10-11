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

int a[105];
int p[28]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;++i){
        a[i]=s[i]-'0';
    }

    for(int i=1;i<n;++i){
        a[i]+=a[i-1];
    }
    int refr;
    for(int i=0;(p[i]<=n and i<=24);++i){
        int cnt=0;
        if(a[n-1]%p[i]==0){
            refr=a[n-1]/p[i];
            int x=1;
            for(int j=0;j<n-1;++j){
                if(a[j]==(refr)*x){
                    x+=1;
                    cnt+=1;
                }
                if(cnt==(p[i]-1)){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
