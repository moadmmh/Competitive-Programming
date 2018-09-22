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


int a[100005],b[100005];
bool c[100005]={false};
vector<pair<int,int>>v;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    for(int i=0;i<n;++i){
        sf(a[i]);
    }
    for(int i=0;i<m;++i){
        sf(b[i]);
    }
    int l=0,r=m-1,mid=0;

    for(int i=0;i<n;++i) {
        int l=0,r=m-1,mid=0,ans=0;
        while (l <=r) {
            mid = l + (r - l) / 2;
            if (a[i]-x<=b[mid] and b[mid]<=a[i]+y ){
                if(c[mid]){ // if it's taken already 
                    l=mid+1;    // we shift to the right because the array is already in increasing order so if 
                                //if the current one is taken that means that there's no vest smaller than this one is available 
                                //and one more reason x and y are the same for all of them so tht means he needs to get a bigger size 
                }
                else {         //if it's not taken yet we can consider it 
                    r = mid - 1;
                    ans = mid;
                }
            }
            else if(a[i]-x>b[mid]){
                l=mid+1;
            }
            else if(a[i]+y<b[mid]){
                r=mid-1;
            }
        }
        if(!c[ans] and a[i]-x<=b[ans] and b[ans]<=a[i]+y){ // we check again that the answer is between this range 
            c[ans]=true;
            v.pb(make_pair(i+1,ans+1));
        }
    }
    cout<<sz(v)<<endl;
    for(int i=0;i<sz(v);++i){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
        return 0;
}
