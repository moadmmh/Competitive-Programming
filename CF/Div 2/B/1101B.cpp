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

int main() {
    //freopen("input.txt","r",stdin);
    string s;
    cin>>s;
    bool fst=0,lst=0;
    int st=-1,stt=-1,lt=0,ltt=0;
    for(int i=0;i<sz(s);++i){
        if(s[i]=='[' and !fst){
            fst=1;
            st=i;
        }
        if(s[i]==':' and fst){
            stt=i;
            break;
        }
    }
    for(int i=sz(s)-1;i>=0;--i){
        if(s[i]==']' and !lst){
            lst=1;
            lt=i;
        }
        if(s[i]==':' and lst ){
            ltt=i;
            break;
        }
    }
    if(stt>=ltt or !fst or !lst or stt==-1 or ltt==-1){
        cout<<-1<<endl;
        return 0;
    }
    else {
        int cnt=0;
        for(int i=stt+1;i<ltt;++i){
            if(s[i]=='|')
                cnt+=1;
        }
        cout<<4+cnt<<endl;
    }
    return 0;
}   
