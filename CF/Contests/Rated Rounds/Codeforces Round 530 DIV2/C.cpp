
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
string s;
int k;

int main() {
    //freopen("input.txt","r",stdin);
    string s;
    cin>>s;
    int k;
    cin>>k;
    int st=0,qs=0,rest=0;
    for(int i=0;i<sz(s);++i){
        if(s[i]=='?')
            qs+=1;
        if(s[i]=='*')
            st+=1;
    }
    if(k<sz(s)-2*(st+qs)){
        return cout<<"Impossible",0;
    }
    if(st==0 and k>(sz(s)-qs)){
        return cout<<"Impossible",0;
    }
    int must=0;
    for(int i=0;i<sz(s)-1;++i){
        if(s[i]!='?' and s[i]!='*' and s[1+i]!='?' and s[1+i]!='*')
            must+=1;
    }
    if(s[sz(s)-1]!='*' and s[sz(s)-1]!='?' )
        must++;
    int tmp=k;
    tmp-=must;
    string ans;
    if(st==0){   
        for(int i=0;i<sz(s);++i){
            if(s[i+1]=='?' and tmp>0){
                ans+=s[i];
                tmp--;
            }
            else if(s[i]!='?' and s[1+i]!='?' ){
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
        return 0;
    }
    else {
        for(int i=0;i<sz(s);++i){
            if(s[i]!='?' and s[i]!='*' and s[1+i]=='*' and tmp>0){
                while(tmp--){
                    ans+=s[i];
                }
            }
            else if(s[i]!='?' and s[i]!='*' and s[1+i]!='?' and s[1+i]!='*')
                ans+=s[i];
        }
        cout<<ans<<endl;
        return 0;
    }
    return 0;
}
