#include<bits/stdc++.h>
//#include<iostream>
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

vector<int>X,Y;

double PolygonArea(vector<int>X,vector<int>Y,int n){
    double area=0;
    int j=n-1;
    for(int i=0;i<n;++i){
        area+=(X[j]+X[i])*(Y[j]-Y[i]);
        j=i;
    }
    return area/2;
}
int main() {
    //freopen("input.txt","r",stdin);
    int n;
    while(cin>>n and n){
        X.clear();
        Y.clear();
        for(int i=0;i<n;++i){
            int a,b;
            cin>>a>>b;
            X.pb(a);    Y.pb(b);
        }
        double res=PolygonArea(X,Y,n);
        cout<<(res<0 ? "CCW " :"CW ")<<fixed<<setprecision(1)<<abs(res)<<endl;
    }
    return 0;
}   
