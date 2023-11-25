#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 내 풀이
string solution(string my_string, string overwrite_string, int s) {
    int index = 0;
    for (int i = s; i < overwrite_string.size() + s; ++i)
    {
        my_string[i] = overwrite_string[index++];
    }
    string answer = my_string;
    return answer;
}

/* 다른 사람 풀이
string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    answer = my_string.replace(s, overwrite_string.size(), overwrite_string);
    return answer;
}
*/

int main()
{
    std::cout << "Hello World!\n";
}
