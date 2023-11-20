#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for (int i = 1; i <= n; ++i)
    {
        answer.emplace_back(i * x);
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
