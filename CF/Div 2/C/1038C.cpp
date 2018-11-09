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

vector<int>a,b;

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x; sf(x); a.pb(x);
    }
    for(int i=0;i<n;++i){
        int x; sf(x); b.pb(x);
    }
    sort(all(a));
    sort(all(b));
    ll suma=0,sumb=0;
    bool turn=true;
    while(!a.empty() or!b.empty()){
        //A turn
                if(!a.empty() and !b.empty() and turn){
                    if(a.back()>b.back()){
                        suma+=a.back();
                        a.pop_back();
                    }
                    else if(a.back()<=b.back()){
                        b.pop_back();
                    }

                }
                else if(turn and a.empty()){
                    b.pop_back();

                }
                else if(turn and b.empty()){
                    suma+=a.back();
                    a.pop_back();

                }
        //B turn
                if(!a.empty() and !b.empty() and !turn){
                    if(a.back()<b.back()){
                        sumb+=b.back();
                        b.pop_back();
                    }
                    else if(a.back()>=b.back()){
                        a.pop_back();
                    }

                }
                else if(!turn and b.empty()){
                    a.pop_back();
                }
                else if(!turn and a.empty()){
                    sumb+=b.back();
                    b.pop_back();

                }

                turn =!turn;
                //cout<<suma<<" "<<sumb<<endl;
    }
    cout<<suma-sumb<<endl;
    return 0;
}
