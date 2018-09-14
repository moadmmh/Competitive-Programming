#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p()     printf("\n")
#define ps()    printf(" ")
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
ll fact(int x){
    if(x<=1)return 1;
    return x*fact(x-1);
}

int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int m,n,t;
    cin>>m>>n>>t;
    if(t==1){
        if(n>13){
            cout<<"TLE"<<endl;
            return 0;
        }
        cout<<(fact(n)>m ? "TLE" : "AC")<<endl;
    }
    if(t==2){
        if(n>30){
            cout<<"TLE"<<endl;
            return 0;
        }
        cout<<(pow(2,n)>m ? "TLE" : "AC")<<endl;
    }
    if(t==3){
        cout<<(pow(n,4)>m ? "TLE" : "AC")<<endl;
    }
    if(t==4){
        cout<<(pow(n,3)>m ? "TLE" : "AC")<<endl;
    }
    if(t==5){
        cout<<(pow(n,2)>m ? "TLE" : "AC")<<endl;
    }
    if(t==6){
        cout<<((n*log2(n))>m ? "TLE" : "AC")<<endl;
    }
    if(t==7){
        cout<<(n>m ? "TLE" : "AC")<<endl;
    }
    return 0;
}
