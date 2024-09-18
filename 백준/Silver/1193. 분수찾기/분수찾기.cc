#include<iostream>

using namespace std;

int main() {

	int input = 0, count = 1 ,a = 0, b = 0, result = 0;

	cin >> input;

	while (true) {

		for (int i = 0; i < count; ++i) {
			++result;

			if (count % 2 != 0) {
				a = i + 1;
				b = count - i;
			}
			else {
				a = count - i;
				b = i + 1;
			}

			if (result >= input) {
				break;
			}
		}

		if (result >= input) {
			cout << b << '/' << a;
			break;
		}

		++count;
	}
}
