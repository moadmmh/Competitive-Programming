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
int a[105];
map<int,int>mp;
int main() {
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
        mp[a[i]]+=1;
    }
    //sort(a,a+n);
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            for(int k=0;k<n;++k){
                if(i!=k and i!=j and j!=k and a[i]==a[j]+a[k]){
                    cout<<i+1<<' '<<j+1<<' '<<k+1<<endl;
                   // cout<<a[i]<<" "<<a[j]<<' '<<a[k]<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}   
