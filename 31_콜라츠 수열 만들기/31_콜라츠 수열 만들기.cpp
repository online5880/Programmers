#include <vector>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.emplace_back(n);
    while (n != 1)
    {
        if (n & 1)
        {
            n = (n * 3) + 1;
            answer.emplace_back(n);
        }
        else
        {
            n = (n /= 2);
            answer.emplace_back(n);
        }
    }
    return answer;
}