#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    int i = 0;
    for (i = 0; i < numbers.size(); ++i)
    {
        if (answer <= n)
        {
            answer += numbers[i];
        }
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}