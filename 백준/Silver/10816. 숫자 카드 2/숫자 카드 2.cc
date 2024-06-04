#include<iostream>
#include<algorithm>
using namespace std;

int compare(const void* a, const void* b)
{
	const int* x = (int*)a;
	const int* y = (int*)b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}

int main() {
	int input1, input2;

	cin >> input1;
	int* arr1 = new int[input1] {};

	for (int i = 0; i < input1; ++i) {
		cin >> arr1[i];
	}

	cin >> input2;
	int* arr2 = new int[input2] {};
	for (int i = 0; i < input2; ++i) {
		cin >> arr2[i];
	}

	sort(arr1, arr1 + input1);

	for (int i = 0; i < input2; ++i) {
		cout << (upper_bound(arr1, arr1 + input1, arr2[i]) - lower_bound(arr1, arr1 + input1, arr2[i])) << " ";
	}
}