// 38_배열 만들기 5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    //string s;
    for (int i = 0; i < intStrs.size(); ++i)
    {
        string temp;
        for (int j = s; j < s + l; ++j)
        {
            temp += intStrs[i][j];
        }
        if (stoi(temp) > k)
        {
            answer.emplace_back(stoi(temp));
        }
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
