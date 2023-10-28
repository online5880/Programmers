#include <iostream>
#include <string>
#include <vector>

int solution(int a, int b, int c, int d) {
    int answer = 0;
    std::vector<int> numbers{ a,b,c,d };
    std::vector<std::string> strings;
    for (int n : numbers)
    {
        strings.emplace_back(std::to_string(n));
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

