#include <string>
#include <vector>
using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int currentNum = 0;
    int prevNum = 0;
    int result = 0;
    for (int i = 0; i < numLog.size(); ++i)
    {
        if (i == 0)
        {
            currentNum = numLog[i];
            prevNum = numLog[i];
        }
        else
        {
            prevNum = numLog[i - 1];
        }
        currentNum = numLog[i];
        result = currentNum - prevNum;
        switch (result)
        {
        case 1:answer += "w";
            break;
        case -1:answer += "s";
            break;
        case 10:answer += "d";
            break;
        case -10:answer += "a";
            break;
        }
    }
    return answer;
}
