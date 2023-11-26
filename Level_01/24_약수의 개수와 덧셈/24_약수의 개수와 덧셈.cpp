#include <iostream>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; ++i)
    {
        int temp = 0;
        for (int j = 1; j <= i; ++j)
        {
            if (i % j == 0)
            {
                temp++;
            }
        }
        answer = temp & 1 ? answer -= i : answer += i;
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

