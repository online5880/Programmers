#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for (const char c : my_string)
    {
        if ((int)c <= (int)'Z')
        {
            answer[(int)(c - 65)]++;
        }
        else if ((int)c >= (int)'a')
        {
            answer[(int)(c - 71)]++;
        }
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}