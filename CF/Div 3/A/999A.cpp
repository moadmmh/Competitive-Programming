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

int main(){
			int n,k,count=0;
			cin>>n>>k;
			int arr[105];
			for (int i = 0; i < n; ++i)
			{
				cin>>arr[i];
			}
			if(arr[0]>k && arr[n-1]>k){cout<<0<<endl; return 0;}

			for (int i = 0; i < n; ++i)
			{
				if(arr[i]<=k)
				count++;
				else break;	
			}
			if(count==n){cout<<n<<endl;return 0;}

			for(int i=n-1;i>=0;i--){
				if(arr[i]<=k)
					count++;
				else break;
			}
			cout<<count;
			return 0;
}
