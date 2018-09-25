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

int a[27];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<"Yes"<<endl;
        return 0;
    }
    for(int i=0;i<n;++i){
        a[s[i]-'a']+=1;
    }
    for(int i=0;i<27;++i){
        if(a[i]>1){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
