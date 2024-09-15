#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input = 0;
	int input2 = 0;

	queue<int> q;

	cin >> input;

	for (int i = 0; i < input; ++i) {
		string str = "";
		cin >> str;

		if (str == "push") {
			cin >> input2;
			q.push(input2);
		}
		else if (str == "front") {
			if (!q.empty()) cout << q.front() << '\n';
			else cout << -1 << '\n';
		}
		else if (str == "size") {
			cout << q.size() << '\n';
		}
		else if (str == "empty") {
			cout << q.empty() << '\n';
		}
		else if (str == "back") {
			if (!q.empty()) cout << q.back() << '\n';
			else cout << -1 << '\n';
		}
		else if (str == "pop") {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop();
			}
			else cout << -1 << '\n';
		}
	}
}