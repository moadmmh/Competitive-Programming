#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d\n", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000000000
#define pi 3.1415926536
#define ex 1e9
#define dbl 1e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) (int)s.length()
#define sz(x) (int)x.size()
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
int a[100005];
int main()
{
    //freopen("input.txt","r",stdin);
    int b,k;
    cin>>b>>k;
    for(int i=0;i<k;++i){
        cin>>a[i];
    }
    int odd=0,even=0;
    for(int i=0;i<k-1;++i){
        if(a[i]&1 and b&1)
            odd+=1;
        else 
            even+=1;
    }
    if(a[k-1]&1)
        odd+=1;
    if(odd%2==0)
        cout<<"even"<<endl;
    else 
        cout<<"odd"<<endl;
    return 0;
}
