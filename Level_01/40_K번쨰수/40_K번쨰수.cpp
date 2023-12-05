#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (auto command : commands)
    {
        vector<int> temp;
        int index = 0;
        for (int i = command[0] - 1; i < command[1]; ++i)
        {
            temp.emplace_back(array[i]);
        }
        sort(temp.begin(), temp.end());
        index = temp[command[2] - 1];
        answer.emplace_back(index);
        index = 0;
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

