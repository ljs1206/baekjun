#include <iostream>
#include <vector>

using namespace std;

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void DFS(int x, int y, vector<vector<int>>& arr) {
	arr[x][y] = 0;

	for (int i = 0; i < 4; ++i) {
		int ix = x + dx[i];
		int iy = y + dy[i];
		if (ix >= 0 && ix < arr.size() && iy >= 0 && iy < arr[0].size() && arr[ix][iy] == 1)
			DFS(ix, iy, arr);
	}
}

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int M, N, K;
		cin >> M >> N >> K;
		vector<vector<int>> arr(N, vector<int>(M, 0));

		for (int j = 0; j < K; j++) {
			int x, y;
			cin >> y >> x;
			arr[x][y] = 1;
		}

		int count = 0;

		for (int j = 0; j < N; ++j) {
			for (int k = 0; k < M; ++k) {
				if (arr[j][k] == 1) {
					count++;
					DFS(j, k, arr);
				}
			}
		}

		cout << count << "\n";
	}
}