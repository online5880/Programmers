#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> numbers{ a,b,c,d };
    sort(numbers.begin(), numbers.end());

    if (numbers[0] == numbers[3]) return 1111 * numbers[0];
    else if (numbers[0] == numbers[1] && numbers[2] == numbers[3])
    {
        return (numbers[0] + numbers[2]) * (abs(numbers[0] - numbers[2]));
    }
    else if (numbers[1] == numbers[2] && (numbers[0] == numbers[1] || numbers[2] == numbers[3]))
    {
        return pow(10 * numbers[1] + (numbers[0] != numbers[1] ? numbers[0] : numbers[3]), 2);
    }
    else if (numbers[0] != numbers[1] && numbers[1] != numbers[2] && numbers[2] != numbers[3]) return numbers[0];
    else return numbers[0] == numbers[1] ? numbers[2] * numbers[3] : (numbers[1] == numbers[2] ? numbers[0] * numbers[3] : numbers[0] * numbers[1]);
}

int main()
{
    std::cout << "Hello World!\n";
}

