#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for (vector<int> n : intervals)
    {
        for (int i = n[0]; i <= n[1]; ++i)
        {
            answer.emplace_back(arr[i]);
        }
    }
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

