#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for (int i = 0; i < 10; ++i)
    {
        auto number = find(numbers.begin(), numbers.end(), i);
        if (number == numbers.end())
        {
            answer += i;
        }
    }
    return answer;
}

// 다른 사람 풀이
// 총합에서 뺀다.

/*int solution(vector<int> numbers) {
    return 45 - accumulate(numbers.begin(), numbers.end(), 0);
}*/


int main()
{
    std::cout << "Hello World!\n";
}
