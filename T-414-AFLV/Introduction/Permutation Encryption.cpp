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
int a[25];
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    do{
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        string s;
        cin.ignore();
        getline(cin,s);
        int x=sz(s);
        int z=(x%n==0?(x/n):(x/n)+1);
        int cnt=0;
        cout<<"'";
        while(z--){
            for(int i=0;i<n;++i){
                if(cnt+a[i]<=x)cout<<s[a[i]-1+cnt];
                else cout<<" ";
            }
            cnt+=n;
        }
        cout<<"'"<<endl;
        cin>>n;
    }while(n);
    return 0;
}
