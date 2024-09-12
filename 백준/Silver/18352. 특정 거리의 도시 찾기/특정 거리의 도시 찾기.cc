#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
vector<int>visited;
vector<vector<int>>v;
vector<int> result;

void BFS(int n)
{
	queue<int> q;
	visited[n] = 0;
	q.push(n);

	while (!q.empty()) {
		int temp = q.front();
		q.pop();

		for (int i = 0; i < v[temp].size(); ++i) {
			int next = v[temp][i];
			if (visited[next] == -1) {
				visited[next] = visited[temp] + 1;
				q.push(next);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);

	int n, m, dis, start, v1, v2;
	cin >> n >> m >> dis >> start;
	v.resize(n + 1);
	visited.resize(n + 1, -1);

	for (int i = 0; i < m; i++)
	{
		cin >> v1 >> v2;
		v[v1].push_back(v2);
	}
	BFS(start);

	bool none = true;
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == dis) {
			cout << i << "\n";
			none = false;
		}
	}
	if (none) cout << -1;
}