#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for (int i = 0; i < code.length(); ++i)
    {
        if (!mode)
        {
            if (code[i] != '1' && i % 2 == 0)
            {
                answer += code[i];
            }
            else if (code[i] == '1')
            {
                mode = true;
            }
        }
        else
        {
            if (code[i] != '1' && i % 2 == 1)
            {
                answer += code[i];
            }
            else if (code[i] == '1')
            {
                mode = false;
            }
        }
    }

    if (answer.empty())
    {
        answer = "EMPTY";
    }

    return answer;
}