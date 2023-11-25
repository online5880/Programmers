#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    for (int i = 1; i <= (n / k); ++i)
    {
        answer.emplace_back(k * i);
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
