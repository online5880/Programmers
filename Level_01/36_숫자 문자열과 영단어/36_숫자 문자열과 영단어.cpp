#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string answer = "";
    string temp;
    vector<string> str = { "zero","one","two","three","four","five","six","seven","eight",                               "nine" };
    const vector<string> numbers = { "0","1","2","3","4","5","6","7","8","9" };
    for (auto c : s)
    {
        if (isdigit(c))
        {
            answer += c;
        }
        else
        {
            temp += c;
            if (temp.length() == 3 || temp.length() == 4 || temp.length() == 5)
            {
                if (find(str.begin(), str.end(), temp) != str.end())
                {
                    int index = find(str.begin(), str.end(), temp) - str.begin();
                    answer += numbers[index];
                    temp = "";
                }
            }
        }
    }

    return stoi(answer);
}
/*
// 다른 사람 풀이

#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    s = regex_replace(s, regex("zero"), "0");
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");
    return stoi(s);
}
*/


int main()
{
    std::cout << "Hello World!\n";
}

