#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	string alphaBet = "abcdefghijklmnopqrstuvwxyz";
	int count[26] = {};
	int maxCount = 0;
	int maxCountIndex = 0;
	int sameCount = 0;
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); ++i) {
		for (int j = 0; j < alphaBet.size(); ++j) {
			if (toupper(str[i]) == toupper(alphaBet[j])) {
				++count[j];
				break;
			}
		}
	}

	for (int i = 0; i < 26; ++i) {
		if (maxCount < count[i]) {
			sameCount = 0;
			maxCount = count[i];
			maxCountIndex = i;
		}
		else if (maxCount > 0 && maxCount == count[i]) {
			sameCount++;
		}
	}
	
	string result;
	result.push_back(toupper(alphaBet[maxCountIndex]));

	if (sameCount > 0) {
		cout << "?";
	}
	else {
		cout << result;
	}
}