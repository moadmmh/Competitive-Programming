#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
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

pair<char,int>c[4] {make_pair('v',1),make_pair('<',2),make_pair('^',3),make_pair('>',4)};

int  get(char X){
    for(int i=0;i<4;++i){
        if(c[i].first==X)
            return c[i].second;
    }
}
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    char st,en;
    cin>>st>>en;
    int n;
    cin>>n;
    int x=(get(en)-get(st)+4)%4; // to handle pos and neg mod cases .
    if(x==0 || x==2){
        cout<<"undefined"<<endl;
        return 0;
    }
    cout<<((n%4==x)?"cw":"ccw")<<endl;// to check if b is greater or not and here we can know the direction .
    return 0;
}
