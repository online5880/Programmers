#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string number = to_string(n);
    for (auto n : number)
    {
        int temp = (int)n - 48;
        answer += temp;
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
