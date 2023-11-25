#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "수";
    for (int i = 1; i < n; ++i)
    {
        if (i & 1)
        {
            answer += "박";
        }
        else
        {
            answer += "수";
        }
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}