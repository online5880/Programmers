﻿#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    for (int i = 0; i < str1.size(); ++i)
    {
        answer += str1[i];
        answer += str2[i];
    }

    // 다른 사람 풀이
    /*
    for (int i = 0; i < str1.length(); i++)
    {
        answer.push_back(str1[i]);
        answer.push_back(str2[i]);
    }
    */
    return answer;
}