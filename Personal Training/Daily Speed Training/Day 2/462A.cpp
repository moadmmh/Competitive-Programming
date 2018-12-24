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
char a[105][105];
int n;
bool check(int x,int y){
    if(x<n and x>0 and y<n and y>0)
        return true;
    return false;
}
int main() {
    //freopen("input.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        int cnt=0;
        for(int j=0;j<n;++j){
            if(a[i+1][j]=='o')
                cnt+=1;
            if(a[i-1][j]=='o')
                cnt+=1;
            if(a[i][j+1]=='o')
                cnt+=1;
            if(a[i][j-1]=='o')
                cnt+=1;
            
            //cout<<cnt<<endl;
            if(cnt%2==1 ){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
