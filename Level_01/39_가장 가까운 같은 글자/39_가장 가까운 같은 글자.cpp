#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    for (int i = 0; i < s.length(); ++i)
    {
        int index = -1;
        for (int j = 0; j < i; ++j) {
            if (s[i] == s[j]) {
                index = i - j;
            }
        }
        answer.emplace_back(index);
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

