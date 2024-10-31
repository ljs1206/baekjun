#include <iostream>

using namespace std;

int main(){
	int n = 0, k = 0;

	cin >> n >> k;

    int** arr = new int* [n];

    for (int i = 0; i < n; i++)
        arr[i] = new int[k];

    for (int i = 0; i < n; i++) arr[i][0] = 1;

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j >= k) continue;
            arr[i][j] = arr[i - 1][j - 1];

            if (i - 1 >= j) arr[i][j] += arr[i - 1][j];
        }
    }

    cout << arr[n - 1][k - 1];
}