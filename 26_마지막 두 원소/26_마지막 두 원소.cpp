﻿#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for (int i = 0; i < num_list.size(); ++i)
    {
        answer.emplace_back(num_list[i]);
        if (i == num_list.size() - 1)
        {
            if (num_list[i] > num_list[i - 1])
            {
                answer.emplace_back(num_list[i] - num_list[i - 1]);
            }
            else
            {
                answer.emplace_back(num_list[i] * 2);
            }
        }
    }
    return answer;
}