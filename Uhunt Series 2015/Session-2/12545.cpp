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
string s[105];
bool a[105]={false};
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s[i];
        if(s[i]!="?"){
            a[i]=true;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(a[x-1]){
            cout<<s[x-1]<<endl;
            continue;
        }
        int cnt1=x-1,cnt2=x-1;
        while(cnt1>=0 or cnt2<=n-1){

            if(a[cnt1] and a[cnt2]){
                cout<<"middle of "<<s[cnt1]<<" and "<<s[cnt2]<<endl;
                break;
            }
            else if(a[cnt1]){

                int diff=abs(cnt1-(x-1));
                while(diff--){
                    cout<<"right of ";
                }
                cout<<s[cnt1]<<endl;
                break;
            }
            else if(a[cnt2]){
                int diff=abs(cnt2-(x-1));
                while(diff--){
                    cout<<"left of ";
                }
                cout<<s[cnt2]<<endl;
                break;
            }
            else {
                if(cnt2<=n-2)cnt2+=1;
                if(cnt1>=1)cnt1-=1;
            }
        }
    }
    return 0;
}
