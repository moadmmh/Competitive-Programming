# include <bits/stdc++.h>

using namespace std;



int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n;
	while (cin >> n and n) {
		vector<string> v, y;
		map<string , queue<string>> mp;
		for (int i = 0; i < n; ++i) {
			string x;
			cin >> x;
			y.push_back(x.substr(0, 2));
			mp[x.substr(0, 2)].push(x);
		}
		sort(y.begin(), y.end());
		for (int i = 0; i < y.size(); ++i) {
			string curr = y[i];
			string temp = mp[curr].front();
			mp[curr].pop();
			v.push_back(temp);
		}
		for (auto x : v) {
			cout << x << endl;
		}
		cout << endl;
	}
}
