#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    sort(number.begin(), number.end());
    for (int i = 0; i < number.size() - 2; ++i)
    {
        for (int j = i + 1; j < number.size() - 1; ++j)
        {
            for (int k = j + 1; k < number.size(); ++k)
            {
                if (number[i] + number[j] + number[k] == 0)
                {
                    answer++;
                }
            }
        }
    }
    return answer;
}
// 투포인터 알고리즘으로 풀 수 있다.

int main()
{
    std::cout << "Hello World!\n";
}

