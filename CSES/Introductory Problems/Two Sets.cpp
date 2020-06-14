#include <bits/stdc++.h>
 
using namespace std;
 
#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.10lf", n)
#define pf(n) printf("%d", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define ex 1e18
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second
#define clr(x) x.clear()
#define LOG(x) std::cout << x << std::endl;
 
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const double PI = 3.14159265359;
 
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

const int N = 2e5;
const int mod = 1000 * 1000 * 1000 + 7;

int a[26];
int main(){
	int n;
	cin>>n;
	ll sum = 0;
	sum = (n*1LL*(n+1))/2;
	if(sum%2!=0){
		return cout<<"NO"<<endl,0;
	}
	vector<int>a,b;
	if(n%2==0){
		int l=1,r=n;
		bool ok=1;
		while(l<r){
			if(ok){
				a.pb(l),a.pb(r);
				l++;
				r--;
			}
			else {
				b.pb(l),b.pb(r);
				l++;
				r--;
			}
			ok=!ok;
		}
	}
	else {
		a.pb(1),a.pb(2),b.pb(3);
		int l=4,r=n;
		bool ok=1;
		while(l<r){
			if(ok){
				a.pb(l),a.pb(r);
				l++;
				r--;
			}
			else {
				b.pb(l),b.pb(r);
				l++;
				r--;
			}
			ok=!ok;
		}
	}
	cout<<"YES"<<endl;
	cout<<sz(a)<<endl;
	for(auto x:a){
		cout<<x<<" ";
	}
	cout<<endl;
	cout<<sz(b)<<endl;
	for(auto x:b){
		cout<<x<<" ";
	}
	cout<<endl;
}
