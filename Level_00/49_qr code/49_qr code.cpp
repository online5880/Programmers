// 49_qr code.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for (int i = 0; i < code.length(); ++i)
    {
        if (i % q == r)
        {
            answer += code[i];
        }

    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

