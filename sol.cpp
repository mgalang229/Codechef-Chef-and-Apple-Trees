#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		set<int> s;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			// store all the elements in a set
			s.emplace(x);
		}
		// output the size of the set
		cout << (int) s.size() << '\n';
	}
	return 0;
}
