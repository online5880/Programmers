#include <iostream>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string s;
    if (my_string.length() >= is_prefix.length())
    {
        s.assign(my_string.begin(), my_string.begin() + is_prefix.length());
        answer = (s == is_prefix) ? 1 : 0;
    }
    else {
        answer = 0;
    }
    return answer;

    // return (my_string.find(is_prefix) == 0);
}

int main()
{
    std::cout << "Hello World!\n";
}
