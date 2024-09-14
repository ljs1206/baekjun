#include<iostream>
#include<queue>
using namespace std;

int main() {
	int inputN, inputK;
	queue<int> q;

	cin >> inputN >> inputK;

	for (int i = 1; i <= inputN; ++i) {
		q.push(i);
	}
	
	cout << "<";

	while (!q.empty()) {
		for (int i = 1; i < inputK; ++i) {
			int a = q.front();
			q.pop();
			q.push(a);
		}

		int b = q.front();
		q.pop();

		if (q.size() == 0) {
			cout << b;
			cout << ">";
		}
		else {
			cout << b << ", ";
		}
	}
}