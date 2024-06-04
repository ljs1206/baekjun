#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int input1 = 0, input2 = 0, input3 = 0, count = 0, j = 0;
	int* arr1;
	int* arr2;

	cin >> input1;

	for (int i = 0; i < input1; ++i) {
		count = 0;
		cin >> input2;
		cin >> input3;
		arr1 = new int[input2] {};
		arr2 = new int[input3] {};

		for (j = 0; j < input2; ++j) {
			cin >> arr1[j];
		}
		for (j = 0; j < input3; ++j) {
			cin >> arr2[j];
		}

		sort(arr1, arr1 + input2);

		for (j = 0; j < input3; ++j) {
			count += input2 - (upper_bound(arr1, arr1 + input2, arr2[j]) - arr1);
		}

		cout << count << "\n";
	}
	//delete[] arr1;
	//delete[] arr2;
}