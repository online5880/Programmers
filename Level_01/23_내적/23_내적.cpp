﻿#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 1234567890;
    answer = inner_product(a.begin(), a.end(), b.begin(), 0);
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

