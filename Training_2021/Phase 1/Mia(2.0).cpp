# include <bits/stdc++.h>

using namespace std;



int getValue(int x, int y) {
	if (x == y) {
		return 100 + x * 10 + y;
	}
	if ((x == 1 && y == 2 ) || (x == 2 && y == 1)) {
		return 212;
	}
	return max((x * 10 + y), (y * 10 + x));
}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		if (!a && !b && !c && !d) {
			break;
		}
		int x = getValue(a, b);
		int y = getValue(c, d);
		if (x > y) {
			cout << "Player 1 wins." << endl;
		}
		else if (y > x)
		{
			cout << "Player 2 wins." << endl;
		}
		else {
			cout << "Tie." << endl;
		}
	}

}
