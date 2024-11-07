#include<iostream>
using namespace std;

int DP[1000001] = { 0, };

int main() {
	int N = 0;
	cin >> N;
	for (int i = 2; i <= N; ++i) {

		DP[i] = DP[i - 1] + 1;

		if (i % 3 == 0) {
			DP[i] = min(DP[i / 3] + 1, DP[i]);
		}
		if (i % 2 == 0) {
			DP[i] = min(DP[i / 2] + 1, DP[i]);
		}
	}
	cout << DP[N];
}