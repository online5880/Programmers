#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int n : arr)
    {
        if (n % divisor == 0 || n / divisor == n)
        {
            answer.emplace_back(n);
        }
    }
    sort(answer.begin(), answer.end());
    if (answer.empty()) { answer.emplace_back(-1); }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

