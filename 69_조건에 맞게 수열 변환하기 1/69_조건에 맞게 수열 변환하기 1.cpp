#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for (int n : arr)
    {
        if (n & 1 && n < 50)
        {
            answer.emplace_back(n * 2);
            continue;
        }
        else if (n % 2 == 0 && n >= 50)
        {
            answer.emplace_back(n * 0.5f);
            continue;
        }
        answer.emplace_back(n);
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
