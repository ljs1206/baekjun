#include <string>
#include <vector>

using namespace std;

int targetNum = 0, answer = 0;

void DFS(int n, char sign, int sum, vector<int> v) {

    if (sign == '+')
        sum += v[n];
    else
        sum -= v[n];

    if (n + 1 == v.size()) {
        if (sum == targetNum) {
            answer++;
        }
        return;
    }
    DFS(n + 1, '+', sum, v);
    DFS(n + 1, '-', sum, v);

}

int solution(vector<int> numbers, int target) {
    targetNum = target;
    int sum = 0;
    DFS(0, '+', sum, numbers);
    DFS(0, '-', sum, numbers);

    return answer;
}