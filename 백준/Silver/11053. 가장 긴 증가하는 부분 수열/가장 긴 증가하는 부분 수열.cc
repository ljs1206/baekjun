#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n = 0;
	int arr[1001]{ 0, };

	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}

	int dp[1001]{0,};

	for (int i = 1; i <= n; ++i)
		dp[i] = 1;


	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j < i; ++j) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	sort(dp, dp + n + 1);
	cout << dp[n];
}