#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    reverse(str.begin(), str.end());
    for (int i = 0; i < str.length(); ++i)
    {
        answer.emplace_back(str[i] - 48);
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
