#include <string>
using namespace std;

int solution(string number) {
    int answer = 0;
    for (const char i : number)
    {
        answer += (i - 48);
    }
    return answer % 9;
}