#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
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

vector<int>v;

int pow(int b, int p) { 
if(p == 0) return 1;
int sq = pow(b, p/2);
sq = sq*sq;
if(p%2 == 1)
sq = sq*b;
return sq;
}


int sum(int ans ){
	int  res=0;
	while(ans!=0){
		res+=(ans%10);
		ans/=10;
	}
	return res;
}

int main(){
	
	//freopen("input.txt","r",stdin);
	//freopen("output.tx(t","w",stdout);
	int a,b,c;	sf(a);sf(b);sf(c);
	ll ans=0;
	
	for(int i=1;i<=81;++i){
		ans=((b*1LL*pow(i,a)) +c);
		if(ans>0 and ans<1000000000 and sum(ans)==i){
			v.pb(ans);
		}
		
	}
	cout<<sz(v)<<endl;
	for (int i = 0; i < sz(v); ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0; 


} 		
