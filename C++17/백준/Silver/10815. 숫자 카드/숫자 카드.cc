#include<set>
#include<iostream>
using namespace std;
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input1, input2;
	set<int> ming;

	cin >> input1;

	for (int i = 0; i < input1; ++i) {
		int a;
		cin >> a;
		ming.insert(a);
	}

	cin >> input2;

	for (int i = 0; i < input2; ++i) {
		int a = 0;
		cin >> a;

		if (ming.find(a) != ming.end()) {
			cout << 1;
		}
		else {
			cout << 0;
		}
		cout << " ";
	}
}