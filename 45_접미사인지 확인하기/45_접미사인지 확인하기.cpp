#include <iostream>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;

    if (my_string.length() >= is_suffix.length())
    {
        if (my_string.substr(my_string.length() - is_suffix.length()) == is_suffix)
        {
            return true;
        }
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

