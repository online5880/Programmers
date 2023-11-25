#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if (s.length() % 2 == 1)
    {
        answer = s[s.length() / 2];
    }
    else
    {
        answer = s[s.length() / 2 - 1];
        answer += s[s.length() / 2];
    }

    return answer;
}
// 다른 사람 풀이
/*string solution(string s) {
    return s.length() & 1 ? s.substr(s.length() * 0.5, 1) : s.substr(s.length() * 0.5 - 1, 2);
}*/

int main()
{
    std::cout << "Hello World!\n";
}
