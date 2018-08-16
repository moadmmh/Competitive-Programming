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
#define MAX 1e12
#define mod 1073741824
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




bool exist[300005]={false};
vector<int>v,u;
ll cnt=0;
int main(){
	
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n; sf(n);
	
	for (int i = 1; i <=n; ++i)
	{
		int x;	sf(x);
		if(x>0 and x<=n and !exist[x]){
			exist[x]=true;
		}
		else {
			v.pb(x);
		}
	}
	for (int i =1; i <=n; ++i)
	{
		if(!exist[i])
			u.pb(i);
	}

	sort(all(v));
	sort(all(u));
	
	for (int i =0; i <sz(v); ++i)
	{
		cnt+=abs(v[i]-u[i]);
	}
	cout<<cnt<<endl;
	return 0; 


} 		
