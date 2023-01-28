#include <bits/stdc++.h>
using namespace std;

/*

2 4 2
4 - 2 = 2
2 2

4 9 5
9 - 5 = 4
9 - 4 = 5
n = 4 - 1 = 3
5 / 3 = 
2 2 1

pigeonhole principle

*/

void test_case(int tc) {
	int n, s, r;
	cin >> n >> s >> r;
	int missing = s - r;
	int sum = missing * n;
	cout << missing << " ";
	for (int i = 0; i < n - 1; i++) {
		int num = missing;
		while (num > 1 && sum > s) {
			num--;
			sum--;
		}
		cout << num << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
