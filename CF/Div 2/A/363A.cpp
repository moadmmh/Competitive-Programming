
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
string solve(char c){
    if(c<'5'){
        if(c=='0')
            return "O-|-OOOO";
        if(c=='1')
            return "O-|O-OOO";
        if(c=='2')
            return "O-|OO-OO";
        if(c=='3')
            return "O-|OOO-O";
        if(c=='4')
            return "O-|OOOO-";
    }
    else{
        if(c=='5')
            return "-O|-OOOO";
        if(c=='6')
            return "-O|O-OOO";
        if(c=='7')
            return "-O|OO-OO";
        if(c=='8')
            return "-O|OOO-O";
        if(c=='9')
            return "-O|OOOO-";
    }
}
int main() {
    //freopen("input.txt","r",stdin);
    string s;
    cin>>s;
    for(int i=sz(s)-1;i>=0;--i){
        cout<<solve(s[i])<<endl;
    }
    return 0;
}
