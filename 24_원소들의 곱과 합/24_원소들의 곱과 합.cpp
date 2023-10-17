#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int a = 1; // 모든 원소의 곱
    int b = 0; // 합의 제곱
    for (const int& n : num_list)
    {
        a *= n;
        b += n;
    }
    answer = (a < pow(b, 2));
    return answer;
}