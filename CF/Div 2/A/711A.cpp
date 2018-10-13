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

string  a[1005];

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,refr=-1;
    cin>>n;
    bool found=false;
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i][0]=='O' and a[i][1]=='O' and !found){
            found=true;
            refr=i;
            a[i][0]='+';
            a[i][1]='+';
        }
        if(a[i][3]=='O' and a[i][4]=='O' and !found){
            found=true;
            refr=i;
            a[i][3]='+';
            a[i][4]='+';
        }
    }
    if(found){
        cout<<"YES"<<endl;
        for(int i=0;i<n;++i){
            cout<<a[i]<<endl;
        }
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
