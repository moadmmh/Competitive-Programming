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


    int main() {

        //freopen("input.txt","r",stdin);
        //freopen("output.tx(t","w",stdout);
        int t;
        cin>>t;
        while(t--){
            int a,b,k;
            cin>>a>>b>>k;
            ll ans=0;
            if(k%2==0){
                ans=(a*1LL*k/2)-(b*1LL*k/2);
            }
            else {
                ans=(a*1LL*(k-1)/2-(b*1LL*(k-1)/2))+a;
            }

            cout<<ans<<endl;
        }
        return 0;
    }
