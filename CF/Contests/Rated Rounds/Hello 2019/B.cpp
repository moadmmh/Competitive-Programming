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
int sum[17],a[17];int n;

bool solve(int x,int tot){
    //cout<<tot<<endl;
    if(x==(n)){
        //cout<<tot<<endl;
        if(tot == 0){
            //cout<<"z"<<tot<<endl;
            return 1;
        }
        else if( tot%360 == 0){
           // cout<<"m"<<tot<<endl;
            return 1;
        }
        //cout<<tot<<"f"<<endl;
        return 0;
    }
   
    bool path1=solve(x+1,tot+a[x]);
    bool path2=solve(x+1,tot-a[x]);

    return path1+path2; 
}
int main() {
    //freopen("input.txt","r",stdin);
    //int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    //sort(a,a+n);
    if(solve(0,0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
