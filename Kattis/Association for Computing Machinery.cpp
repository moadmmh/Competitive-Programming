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
vector<int>v;
int main() {
    //freopen("input.txt","r",stdin);
    int n,p;
    cin>>n>>p;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        v.pb(x);
    }
    int pen=0;
    if(v[p]>300){
        cout<<"0 0"<<endl;
        return 0;
    }
    int tmp=v[p];
    pen=tmp;
    int cnt=1;
    int x=tmp;
    sort(all(v));
    for(int i=0;i<n;++i){
        if(v[i]==tmp){
            continue;    
        }
        if(x+v[i]<=300){
            cnt+=1;
            x+=v[i];
            pen+=x;    
        }
        else{
            break;
        }
    }
    cout<<cnt<<" "<<pen<<endl;
    return 0;
}
