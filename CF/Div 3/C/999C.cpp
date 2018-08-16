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
int main() {
    long long n,k,a[26]={0},i;
    string s;
    cin>>n>>k>>s;
    for(i=0;i<n;i++) a[s[i]-'a']++;
    for(i=0;i<26;i++) {
        if(a[i]>=k) a[i]=k;
        k-=a[i];
    }
    for(i=0;i<n;i++) {
        if(a[s[i]-'a']==0) cout<<s[i];
        else a[s[i]-'a']--;
    }
    return 0;
}
