#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int t_length = t.length();
    int p_length = p.length();
    long long num = stoll(p);
    for (int i = 0; i <= (t_length - p_length); ++i)
    {
        if (stoll(t.substr(i, p_length)) <= num)
            answer++;
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

