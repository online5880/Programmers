#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    while (true)
    {
        if (n % answer == 1)
        {
            break;
        }
        answer++;
    }
    return answer;
}
int main()
{
    std::cout << "Hello World!\n";
}
