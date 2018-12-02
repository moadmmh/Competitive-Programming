#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p()     printf("\n")
#define ps()    printf(" ")
#define ll long long
#define ull unsigned long long
#define mod 1e9+1
#define MAX 1000000005
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
char a[101][101];
vector<int>v;
void generate(){
    for(int i=1;i<=100;++i)
        v.pb(i*i);
}
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    string s;
    generate();
    while(n--){
        cin>>s;
        int x=sz(s),m=0;
        for(int i=0;i<100;++i){
            if(v[i]>=x){m=sqrt(v[i]);break;}
        }
        int y=x/m,z=x%m;
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;++j){
                if(cnt+j<x)a[i][j]=s[cnt+j];
                else a[i][j]='*';
            }
            cnt+=m;
        }
        for(int i=0;i<m;++i){
            for(int j=m-1;j>=0;--j){
                if(a[j][i]!='*')
                    cout<<a[j][i];
            }
        }
        p();
    }
    return 0;
}
