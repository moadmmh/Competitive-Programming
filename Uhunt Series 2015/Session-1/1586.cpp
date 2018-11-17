#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p() 	printf("\n")
#define ps() 	printf(" ")
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
char name[4]={'C','H','O','N'};
float val[4]={12.01,1.008,16.00,14.01};
char a[105];
#define C 12.01
#define H 1.008
#define O 16.00
#define N 14.01
float calculate(int n,char x){
    if(n==0)return 0.0;
    for (int i=0;i<4;++i){
        if(name[i]==x)
            return val[i]*n;
    }
    return 0.0;
}
bool isdigit(char x){
    if(x>='0' and x<='9')
        return true;
    return false;
}

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int T;
    cin>>T;
    while(T--){
        //scanf("%s",a);
        string a;
        cin>>a;
        int nbr=0;
        float ans=0.0;
        char curr=' ';
        for(int i=0;a[i];++i){
            if(!isdigit(a[i])){
                ans+=calculate(nbr,curr);
                if(!isdigit(a[i+1]) or i==sz(a)-1){
                    ans+=calculate(1,a[i]);
                    //nbr=0;
                }
                else {
                    curr = a[i];
                }
                nbr=0;
            }
            else {
                nbr=nbr*10+(a[i]-'0');
                if(i==sz(a)-1)
                    ans+=calculate(nbr,curr);
            }
        }
        cout<<fixed<<setprecision(3)<<ans<<endl;
        }
    return 0;
}
