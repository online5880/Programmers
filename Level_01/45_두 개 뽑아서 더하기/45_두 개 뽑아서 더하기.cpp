#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> tempSet;
    for (int i = 0; i < numbers.size(); ++i)
    {
        for (int j = i + 1; j < numbers.size(); ++j)
        {
            tempSet.emplace(numbers[i] + numbers[j]);
        }
    }
    for (const auto& number : tempSet)
    {
        answer.emplace_back(number);
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
