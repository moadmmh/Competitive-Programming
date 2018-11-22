#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p() 	printf("\n")
#define ps() 	printf(" ")
#define ll long long
#define ull unsigned long long
#define mod 1e9+1
#define MAX 1000000005
#define pi 3.1415926536
#define ex 1e12
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()
pair<char,pair<int,int>>p[20];
bool taken[20]={false};
bool solved[105][20]={false};
char refr[12]={'A','B','C','D','E','F','G','H','I','J','K','L'};
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,t,m;
    cin>>n>>t>>m;
    while(m--){
        int tt,ID;
        char pb;
        string sta;
        cin>>tt>>ID>>pb>>sta;
        if(sta=="Yes" and !solved[ID][pb-'A']){
            taken[pb-'A']=true;
            p[pb-'A']=make_pair(pb,make_pair(tt,ID));
            solved[ID][pb-'A']=true;
        }
        else
          continue;
    }
    int i=0;
    while(i<n){
        if(!taken[i]){
            cout<<refr[i]<<" - -"<<endl;
        }
        else {
            cout<<p[i].first<<" "<<p[i].second.first<<" "<<p[i].second.second<<endl;
        }
        i+=1;
    }
    return 0;
}
