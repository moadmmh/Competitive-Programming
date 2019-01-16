#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d\n", n)
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
#define len(s)   (int)s.length()
#define sz(x)    (int)x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

map<string,vector<string>>grp;
vector<string>words;
queue<string>q;
map<string,int>vis;

int diff(string s,string t){
    int cnt=0;
    for(int i=0;i<sz(s);++i){
        if(s[i]!=t[i])
            cnt+=1;
    }
    return cnt;
}

int main() {
    //freopen("input.txt","r",stdin);
    int T;
    cin>>T;
    while(T--){
    
        grp.clear();
        words.clear();
        string s;
        while(cin>>s and s!="*"){
            words.pb(s);
        }

        //building graph
        for(int i=0;i<sz(words);++i){
            for(int j=0;j<sz(words);++j){
                if( sz(words[i]) == sz(words[j]) and diff(words[i], words[j]) == 1){
                    bool ok=true;
                    for(int k=0;k<sz(grp[words[i]]);++k){
                        if(grp[words[i]][k]==words[j])
                            ok=false;
                    }
                    if(ok){
                        grp[words[i]].pb(words[j]);
                        grp[words[j]].pb(words[i]);
                    }
                }
            }
        }
        
        //BFS 
        cin.ignore();
        string line;
        while(getline(cin,line) and line!=""){
            string st,en;
            stringstream ss(line);
            ss>>st>>en;
            for(int i=0;i<sz(words);++i){
                vis[words[i]]=0x3f;
            }
            vis[st]=0;
            q.push(st);
            while(!q.empty()){

                string y=q.front();
                q.pop();
               
                for(int i=0;i<sz(grp[y]);++i){

                    string v=grp[y][i];
                    
                    if(vis[v]>vis[y]+1){
                        vis[v]=vis[y]+1;
                        q.push(v);
                    }

                }
            }
            cout<<st<<' '<<en<<' '<<vis[en]<<endl;
        }
        if(T)
            cout<<endl;
    }
    return 0;
}   
