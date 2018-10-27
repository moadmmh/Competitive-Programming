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
#define ex 1e12
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

vector <int>primes,almostPrimes;

void SieveOfEratosthenes(int n) {
    bool prime[3001];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++) {
        if (prime[p])
            primes.pb(p);
    }
}


int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    int n;
    cin>>n;
    SieveOfEratosthenes(3000);
    int cnt=0;
    for(int i=1;i<=n;++i){
        int ref=0;
        for(int j=0;j<sz(primes);++j){
            if(i>=primes[j]){
                if(i%primes[j]==0)
                    ref+=1;
            }
            else {
                cnt+=((ref==2 )?1:0);
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
