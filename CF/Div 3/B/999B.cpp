#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define sf(n) scanf("%d",&n)
#define pf(n)  printf("%.10f",n) 
#define p() cout<<endl;
#define ll long long
#define  MAX 1000000005
#define mod 1000000007
string s;

int main(){
			int n,count=0;
			cin>>n;
			cin>>s;

			for (int i = 1; i<=n; ++i)
			{
				if(n%i==0){
					for(int j=0;j<i/2;j++){
						swap(s[j],s[i-j-1]);
					}
				}
			}
			cout<<s<<endl;

			return 0;
}
