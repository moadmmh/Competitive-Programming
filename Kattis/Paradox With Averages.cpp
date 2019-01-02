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
int E[1005],C[1005];
int main() {
    //freopen("input.txt","r",stdin);
    int T;
    cin>>T;
    while(T--){
        int Ncs,Nec;
        ll sumE=0,sumC=0;
        cin>>Ncs>>Nec;
        for(int i=0;i<Ncs;++i){
           sf(C[i]);
           sumC+=C[i]; 
        }
        for(int i=0;i<Nec;++i){
            sf(E[i]);
            sumE+=E[i];
        }
        sort(C,C+Ncs);
        sort(E,E+Nec);
        int cnt=0;
        bool done=true;
        double comp=(sumC*1.0)/(Ncs*1.0);
        double econ=(sumE*1.0)/(Nec*1.0);
        for(int i=Ncs-1;i>=0;--i){
            double temp=((sumE+C[i])*1.0)/(1.0*(Nec+1));
            double dumm=((sumC-C[i])*1.0)/((Ncs-1)*1.0);
            if(temp>econ and dumm>comp){
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
