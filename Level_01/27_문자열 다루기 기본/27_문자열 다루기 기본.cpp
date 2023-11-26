#include <iostream>
#include <regex>
using namespace std;

bool solution(string s) {
	const regex pattern("^(\\d{4}|\\d{6})$");
    return regex_match(s, pattern);
}

// 다른 사람 풀이
/*bool solution(string s) {
    bool answer = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))
            answer = false;
    }

    return s.size() == 4 || s.size() == 6 ? answer : false;
}*/

int main()
{
    std::cout << "Hello World!\n";
}
