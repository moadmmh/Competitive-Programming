#include <bits/stdc++.h>

using namespace std;
#define sf(n) scanf("%d", &n)
#define pd(n) printf("%.12lf", n)
#define pf(n) printf("%d", n)
#define p() printf("\n")
#define ps() printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000 * 1000 * 1000 + 7
#define pi 3.1415926536
#define ex 1e18
#define dbl 2e09
#define qu(q) queue<int> q
#define pqu(q) priority_queue<int> q
#define len(s) s.length()
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;

map<string, vector<string>> grp;
map<string, int> vis;
map<string, string> parent;
map<string, int> dist;

int main()
{
    int n;
    cin >> n;
    string line;
    getline(cin, line);
    while (n--)
    {
        getline(cin, line);
        stringstream s(line);
        string a, b;
        s >> a;
        dist[a] = INF;
        vis[a] = 0;
        while (s >> b)
        {
            dist[b] = INF;
            grp[a].pb(b);
            grp[b].pb(a);
            vis[b] = 0;
        }
    }
    //cout<<"here"<<endl;
    string start, end;
    cin >> start >> end;
    queue<string> q;
    q.push(start);
    dist[start] = 0;
    //cout<<"---->"<<start<<" "<<end<<endl;
    //memset(dist, 0x3f, sizeof dist);
    vis[start] = 1;
    while (!q.empty())
    {
        string curr = q.front();
        q.pop();
        //cout<<curr<<endl;
        for (auto n : grp[curr])
        {
            if (!vis[n] and (dist[curr] + 1 < dist[n]))
            {
                q.push(n);
                parent[n] = curr;
                vis[n] = 1;
                dist[n] = dist[curr] + 1;
            }
        }
    }
    //cout<<"HEREeeeeee";
    parent[start] = "WEAREHERE";
    string tmp = "";

    if (!vis[end])
    {
        return cout << "no route found" << endl, 0;
    }

    vector<string> sequence;
    //sequence.pb(end);
    string curr = end;
    //cout<<curr<<endl;
    //cout<<"DONE"<<endl;
    //return 0;

    while (tmp != "WEAREHERE")
    {
        sequence.pb(curr);
        tmp = parent[curr];
        curr = tmp;
        //cout<<curr<<endl;
    }

    //cout<<"HERE"<<endl;
    for (int i = sz(sequence) - 1; i >= 0; --i)
    {
        cout << sequence[i] << " ";
    }
    cout << endl;
    return 0;
}
