# include <bits/stdc++.h>

using namespace std;


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	char a[5][5];
	vector<pair<int, int>> v;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cin >> a[i][j];
			if (a[i][j] == 'k') {
				v.push_back(make_pair(i, j));
			}
		}
	}

	int dx[8] = {1, 1, -1, -1, 2, -2, 2, -2};
	int dy[8] = {2, -2, 2, -2, 1, 1, -1, -1};
	bool valid = true;

	if (v.size() != 9) {
		valid = false;
	}

	for (auto p : v) {
		for (int j = 0; j < 8; ++j) {
			int nx = dx[j] + p.first;
			int ny = dy[j] + p.second;
			if (nx < 0 or nx >= 5 or ny < 0 or ny >= 5) {
				continue;
			}
			if (a[nx][ny] == 'k') {
				valid = false;
			}
		}
	}

	cout << (valid ? "valid" : "invalid") << endl;


}
