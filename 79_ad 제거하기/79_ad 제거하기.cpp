﻿#include <iostream>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 0; i < strArr.size(); ++i)
    {
        if (strArr[i].find("ad") == string::npos)
        {
            answer.emplace_back(strArr[i]);
        }
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}