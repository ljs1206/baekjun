#include<iostream>
#include<string>

using namespace std;

int main() {
	int input;
	string result = "";

	cin >> input;

	string *inputArr = new string[input];

	if (input <= 1) {
		cin >> inputArr[0];
		cout << inputArr[0];

		return 0;
	}

	for (int i = 0; i < input; ++i) {
		cin >> inputArr[i];
	}

	int sameCount;
	int size = inputArr[0].size();
	int k = 0, j = 0;
	for (j = 0; j < size; ++j) {
		sameCount = 0;
		for (k = 1; k < input; ++k) {
			if (inputArr[0][j] == inputArr[k][j]) {
				++sameCount;
			}
		}
		if (sameCount == input - 1) {
			result.push_back(inputArr[0][j]);
		}
		else {
			result.push_back('?');
		}
	}

	cout << result;
}