#include <iostream>

std::string solution(std::string my_string, int m, int c) {
	std::string answer = "";
    for (int i = 0; i < my_string.length(); ++i)
    {
        if (i % m + 1 == c)
        {
            answer += my_string[i];
        }
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
