﻿#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for (int i = 0; i < num_list.size(); i += n)
    {
        answer.emplace_back(num_list[i]);
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

